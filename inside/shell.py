""" Shell module """
import sqlite3 as sqlite
import string

import header
import inside

# подключение к БД

CONNECT = sqlite.connect("game.db")
DB = CONNECT.cursor()

inside.util.db_check()


def _play_start(player_params, debug_mode=0, map_file="default_map"):

    if debug_mode != 1:
        inside.util.clear()

    map = open("inside/maps/%s" % map_file, "r").read().split(("\n"))

    if player_params[4] == "(0, 0)":
        player_coor = list(inside.map.get_player_spawn(map))
    else:
        player_coor = player_params[4].split(",")
        player_coor = [int(player_coor[0]), int(player_coor[1])]

    while True:
        query = string.capwords(input('~> '))

        if query == 'Save':
            _save_char(player_params, player_coor)

        elif query == 'Exit':
            _save_char(player_params, player_coor)

            inside.util.cprint('Exit to main menu.', 'green', 'black')
            return 0

        elif query in ("North", "N"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1] + 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[1] += 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("South", "S"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1] - 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[1] -= 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("West", "W"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1 , player_coor[1]))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("East", "E"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1 , player_coor[1]))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Northwest", "Nw"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1 , player_coor[1] + 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor[1] += 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Northeast", "Ne"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1 , player_coor[1] + 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                player_coor[1] += 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Southwest", "Sw"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1 , player_coor[1] - 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor[1] -= 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Southeast", "Se"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1 , player_coor[1] - 1))

            if map_notation == "#":
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor[1] -= 1
                print(header.CONVENTIONAL_NOTATIONAL[map_notation])

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Mylocation", "Ml"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1]))
            print("Your location: %s" % header.CONVENTIONAL_NOTATIONAL[map_notation])
            print(player_coor)
            print("h")
            
        elif query == 'Clear':
            inside.util.clear()

        CONNECT.commit()


def _get_loadplayer():
    player_name = input("\nInput character name: ")

    player_params = list(DB.execute(
        "select * from players where name='%s'" % player_name))

    _play_start(player_params[0])


def _get_playerlist():
    players = list(DB.execute("select * from players"))

    if players == []:
        print("Characters not found!")

    else:

        print("Character list:")

        for i in range(0, len(players), 1):
            print("№ %d  Name: %s | Years old: %s | Class: %s | Coordinates: %s | HP: %s | MP: %s" % (
                i + 1, players[i][1], players[i][2], players[i][3], players[i][4], players[i][5], players[i][6]))


def _save_char(player_params, player_coor):
    DB.execute("UPDATE players SET age = %s, coor = '%s', hp = %s, mp = %s WHERE name='%s'" % (
        player_params[2], "%s, %s" % (player_coor[0], player_coor[1]), player_params[5], player_params[6], player_params[1]))


def init(debug_mode=0):
    if debug_mode != 1:
        inside.util.clear()

    while True:
        query = string.capwords(input('$ '))
        if query == 'Help':
            inside.util.cprint('Commands:\n Clear - For clear console \n Newplayer - Creating new player\n Infoclasses - Information about classes\n Quit - exit from shell\n Loadplayer - loading your player\n Listplayers - list of available players', 'white', 'black')

        elif query == 'Clear':
            inside.util.clear()

        elif query == 'Newplayer':
            inside.player.new_player()

        elif query == 'Quit':
            inside.util.cprint('Good Bye!', 'green', 'black')
            exit(0)

        elif query == 'Infoclasses':
            print('Mage - Mages wield the elements of fire, frost, and arcane to destroy or neutralize their enemies.\n They are a robed-cloth class that excels at dealing massive damage from afar, casting elemental bolts at a single target,\n or raining destruction down upon their enemies in a wide area of effect.\n Mages can also augment their allies spell-casting powers, summon food or drink to restore their friends,\n and even travel across the world in an instant by opening arcane portals to distant lands. Their arsenal includes some powerful buffs,\n debuffs, stuns, and snares, enabling them to dictate the terms of any fight.')
            print('Warriors - are a very powerful class, with the ability to tank or deal significant melee damage.\n The warriors Protection tree contains many talents to improve their survivability and generate threat versus monsters.\n Protection warriors are one of the main tanking classes of the game and are considered the "classic" tanking class.\n (They\'re also great flag carriers in PvP!) They also have two damage-oriented talent trees - Arms and Fury,\n the latter of which includes the talent  Titans Grip, which allows the warrior to wield two two-handed weapons at the same time.\n They are capable of strong melee AoE damage with spells such as  Whirlwind and  Bladestorm. A warrior fights while in a specific stance,\n which affects Rage generation.')
            print('Rouge - every town and city has its share of rogues. Most of them live up to the worst stereotypes of the class, making a living as burglars,\n assassins, cutpurses, and con artists. Often, these scoundrels are organized into a thieves’ guild or crime family.\n Plenty of rogues operate independently, but even they sometimes recruit apprentices to help them in their scams and heists.\n A few rogues make an honest living as locksmiths, investigators, or exterminators, which can be a dangerous\n job in a world where dire rats—and wererats—haunt the sewers.')

        elif query == 'Listplayers':
            _get_playerlist()

        elif query == "Loadplayer":
            _get_playerlist()
            _get_loadplayer()

        else:
            inside.util.cprint(
                'Error! Command not found. Please type "help" ', 'red')
