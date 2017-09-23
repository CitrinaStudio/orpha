""" Shell module """
import sqlite3 as sqlite
import string
import math

import header
import inside

from header import DB
from header import CONNECT

import math

inside.util.db_check()

from numpy import random as nprand


def _get_player_params(player_params):
    print("Your params: \n hp: %s\n mp: %s\n\n Abilityes: \n\n str: %s\n dex: %s\n con: %s\n inte: %s\n wis: %s\n cha: %s" %
          (player_params[5], player_params[6], player_params[7], player_params[8],
           player_params[9], player_params[10], player_params[11], player_params[12]))


def _get_playerlist():
    """Функция получения списка персонажей"""
    players = list(DB.execute("SELECT * FROM players"))

    if players == []:
        print("Characters not found!")
        return 0

    else:

        print("Character list:")

        for i in range(0, len(players), 1):
            print("№ %d  Name: %s | Years old: %s | Class: %s | Coordinates: %s | HP: %s | MP: %s " % (
                i + 1, players[i][1], players[i][2], players[i][3], players[i][4], players[i][5], players[i][6]))


def save_char(player_params, player_coor):
    """Функця сохранения персонажа"""
    DB.execute("UPDATE players SET age = %s, coor = '%s', hp = %s, mp = %s, str =%s, dex =%s, con =%s, inte =%s, wis =%s, cha =%s WHERE name='%s'" % (
        player_params[2], "%s, %s" % (player_coor[0], player_coor[1]), player_params[5], player_params[6], player_params[7], player_params[8], player_params[9], player_params[10], player_params[11], player_params[12], player_params[1]))


def play_start(player_params, debug_mode=0, map_file="default_map", recursion_count=0, location_shell=""):
    """Игровой процесс"""
    if debug_mode != 1:
        inside.util.clear()

    map = open("inside/maps/%s" % map_file, "r").read().split(("\n"))
    global_player_coor = player_params[4]

    if player_params[4] == "(0, 0)" and recursion_count == 0:
        player_coor = inside.map.get_player_spawn(map)

    elif recursion_count != 0:
        player_coor = list(inside.map.get_player_spawn(map))

    else:
        player_coor = player_params[4].split(",")
        player_coor = [int(player_coor[0]), int(player_coor[1])]

    while True:
        query = string.capwords(input('~%s> ' % location_shell))

        if query == 'Save':
            save_char(player_params, global_player_coor)

        elif query == 'Exit' and recursion_count == 0:
            save_char(player_params, player_coor)

            inside.util.cprint('Exit to main menu.', 'green', 'black')
            return 0

        elif query == 'Exit' and recursion_count != 0:
            player_coor = global_player_coor
            return 0

        elif query in ("North", "N"):  # Передвижение на север
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1] - 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[1] -= 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("South", "S"):  # Передвижение юг
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1] + 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[1] += 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("West", "W"):  # Передвижение на запад
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1, player_coor[1]))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("East", "E"):  # Передвижение на восток
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1, player_coor[1]))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Northwest", "Nw"):  # Передвижение на Северо - запад
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1, player_coor[1] - 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor[1] -= 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Recurslevel", "Rl"):
            print("Current rec. level: %s" % recursion_count)

        elif query in ("Northeast", "Ne"):  # Передвижение на Северо - восток
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1, player_coor[1] - 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                player_coor[1] -= 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Southwest", "Sw"):  # Передвижение Юго - запад
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1, player_coor[1] + 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor[1] += 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Southeast", "Se"):  # Передвижение на юго - восток
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1, player_coor[1] + 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                player_coor[1] += 1
                inside.map.get_map_detail(map, player_coor, player_params)

            if debug_mode == 1:
                print(player_coor)

        elif query in ("Mylocation", "Ml"):
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1]))

            print("Your location: %s" %
                  header.CONVENTIONAL_NOTATIONAL[map_notation])
        elif query in ("Navigate", "Nav"):
            print(player_coor)

        elif query == "Map":
            inside.map.get_player_map(map_file, player_coor)

        elif query in ("Myparams", "Mp"):
            _get_player_params(player_params)

        elif query == "Oksik":
            print(type(player_params[6]))
            print(player_params)

        elif query == 'Clear':  # Очищение Шелла
            inside.util.clear()


def battlefield(player_params, enemy_params, debug_mode=0):
    """Сражение"""
    if debug_mode != 1:
        inside.util.clear()

    print("You is meeting the", enemy_params[3])

    print("He has", enemy_params[0], "hp and", enemy_params[1], "mp.")

    enemy_hp = enemy_params[0]

    mboss_hp = enemy_params[0]

    player_hp = int(player_params[5])
    hight_player_hp = player_hp

    player_mp = int(player_params[6])
    hight_player_mp = player_mp

    player_int = player_params[10]
    player_wis = player_params[11]

    player_str = player_params[7]
    player_con = player_params[9]

    player_coeff = math.cos(player_int + player_wis + player_str + player_con)

    enemy_danger_coeff = enemy_params[2] / player_coeff

    mboss_danger_coeff = enemy_params[2] / player_coeff

    block_enemy_action = 0

    player_attacking = False

    if player_mp + 1 <= hight_player_mp:
        player_mp += 1
        print("\n You take 1 mp. You have %s mp" % player_mp)

    while True:
        query = string.capwords(input('$ '))
        if query in ('Attack', 'A'):

            player_damage = math.ceil((player_str + player_con) /
                                      enemy_danger_coeff * nprand.random())

            print('\nYou inflicted', player_damage, 'damage.')

            enemy_hp -= player_damage

            print("Enemy have", enemy_hp, "hp.")

            print("You inflicted enemy\'s %s\n" %
                  nprand.choice(header.BODY_PARTS))

            player_attacking = True

        elif query in ("Leave", "L"):
            print("You escaped from the enemy.")
            return 0

        elif query == "Coeff":
            print(enemy_params[2])

        elif query == "Help":
            print("Attack/At - for make a blow\n Leave/L - for leave from battle\n")

        elif query in ("Myparams", "Mp"):
            _get_player_params(player_params)

        elif query in ('Magic', 'M'):

            print("This is your spells: \n")

            for i in range(0, len(header.MAGIC_SPELLS_NAMES), 1):
                print("№%s %s| MP Cost: %s | Damage Bonus: %s \n" % (
                    i + 1, header.MAGIC_SPELLS_NAMES[i],
                    header.MAGIC_SPELLS[header.MAGIC_SPELLS_NAMES[i]][1],
                    header.MAGIC_SPELLS[header.MAGIC_SPELLS_NAMES[i]][0]))

            spell_choice = string.capwords(input("Input spel name: "))

            spell_cost = header.MAGIC_SPELLS[spell_choice][1]

            if spell_choice in header.MAGIC_SPELLS_NAMES and player_mp - spell_cost >= 0:
                player_damage = math.ceil(
                    header.MAGIC_SPELLS[spell_choice][0] + player_int)
                print('\nYou inflicted', player_damage, 'damage.')
                enemy_hp -= player_damage

                print("Enemy have", enemy_hp, "hp.")

                print(header.MAGIC_DAMAGE_DETAIL[
                    spell_choice] % nprand.choice(header.BODY_PARTS))

                spell_effect = inside.util.get_spell_effect(
                    spell_choice, math.fabs(enemy_danger_coeff))

                if spell_effect[0] == "block_enemy_action":
                    block_enemy_action = spell_effect[1]
                    continue
                else:
                    pass
                player_attacking = True

                player_mp -= header.MAGIC_SPELLS[spell_choice][1]

                print("You have %s mp.\n" % (player_mp))

            elif player_mp - header.MAGIC_SPELLS[spell_choice][1] < 0:
                print("You have %s mp. You need %s mp" %
                      (player_mp, header.MAGIC_SPELLS[spell_choice][1] - player_mp))

                player_attacking = False

            else:
                print("You can't read %s - this is not spell." % spell_choice)

        if enemy_hp <= 0:
            print("%s is dead." % enemy_params[3])
            return 0

        elif block_enemy_action == 0 and player_attacking == True:
            
            if enemy_params[3] in header.POTENTIAL_ENEMY_LIST:
                print(enemy_danger_coeff)
                enemy_damage = math.ceil(enemy_params[1] * math.sqrt(enemy_danger_coeff))
                player_hp -= enemy_damage

                print(enemy_params[3], "has caused you", enemy_damage, "damage.")

                player_attacking = False
            else:
                enemy_damage = int(enemy_params[1] * math.sqrt(enemy_danger_coeff))
                player_hp -= enemy_damage

                print(enemy_params[3], "has caused you", enemy_damage, "damage by", nprand.choice(header.MAGIC_MBOSS_SPELLS))

                player_attacking = False

        elif block_enemy_action > 0 and player_attacking == True:
            block_enemy_action -= 1
            print("Enemy action blocked for %s" % block_enemy_action)


def init(debug_mode=0):
    """Инициальзация командной строки"""
    if debug_mode != 1:
        inside.util.clear()

    while True:
        query = string.capwords(input('$ '))
        if query == 'Help':  # Команда, выводящая помощь
            inside.util.cprint('''Commands:\n Clear - For clear console \n
               Newplayer - Creating new player\n
               Infoclasses - Information about classes\n
               Quit - exit from shell\n
               Loadplayer - loading your player\n
               Listplayers - list of available players''', 'white', 'black')

        elif query == 'Clear':  # Очистка командной строки
            inside.util.clear()

        elif query in ('Newplayer', 'Np'):  # Создание нового персонажа
            inside.player.new_player()

        elif query == 'Quit':  # Выход
            inside.util.clear()
            inside.util.cprint('Good Bye!', 'green', 'black')
            exit(0)

        elif query in ('Infoclasses', 'In'):  # Вывод информации о классах
            print('Mage - Mages wield the elements of fire, frost, and arcane to destroy or neutralize their enemies.\n They are a robed-cloth class that excels at dealing massive damage from afar, casting elemental bolts at a single target,\n or raining destruction down upon their enemies in a wide area of effect.\n Mages can also augment their allies spell-casting powers, summon food or drink to restore their friends,\n and even travel across the world in an instant by opening arcane portals to distant lands. Their arsenal includes some powerful buffs,\n debuffs, stuns, and snares, enabling them to dictate the terms of any fight.')
            print('Warriors - are a very powerful class, with the ability to tank or deal significant melee damage.\n The warriors Protection tree contains many talents to improve their survivability and generate threat versus monsters.\n Protection warriors are one of the main tanking classes of the game and are considered the "classic" tanking class.\n (They\'re also great flag carriers in PvP!) They also have two damage-oriented talent trees - Arms and Fury,\n the latter of which includes the talent  Titans Grip, which allows the warrior to wield two two-handed weapons at the same time.\n They are capable of strong melee AoE damage with spells such as  Whirlwind and  Bladestorm. A warrior fights while in a specific stance,\n which affects Rage generation.')
            print('Rouge - every town and city has its share of rogues. Most of them live up to the worst stereotypes of the class, making a living as burglars,\n assassins, cutpurses, and con artists. Often, these scoundrels are organized into a thieves’ guild or crime family.\n Plenty of rogues operate independently, but even they sometimes recruit apprentices to help them in their scams and heists.\n A few rogues make an honest living as locksmiths, investigators, or exterminators, which can be a dangerous\n job in a world where dire rats—and wererats—haunt the sewers.')

        elif query in ('Listplayers', 'Lipl'):  # Список доступных персонажей
            _get_playerlist()

        elif query in ("Loadplayer", 'Lp'):  # Загрузка персонажа
            if _get_playerlist() != 0:

                player_name = input("\nInput character name: ")

                player_params = list(DB.execute(
                    "select * from players where name='%s'" % player_name))

                play_start(player_params[0])
                """
                try:
                    play_start(player_params[0])

                except IndexError:
                    inside.util.cprint("Player not found! Try again", "red")

                    while_exit_status = 0

                    while while_exit_status != 1:
                        _get_playerlist()

                        player_name = input("\nInput character name: ")

                        player_params = list(DB.execute(
                            "select * from players where name='%s'" % player_name))

                        try:
                            play_start(player_params[0])

                        except IndexError:
                            inside.util.cprint(
                                "Player not found! Try again", "red")

                        else:
                            while_exit_status = 1
                """

        else:
            inside.util.cprint(
                'Error! Command not found. Please type "help" ', 'red')
