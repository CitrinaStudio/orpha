""" Shell module """
import string
import math

import header
import inside

from tinydb import TinyDB, Query

TDB = TinyDB("game.json")


import math

from numpy import random as nprand


def _get_player_params(player_params):
    print("Your params: \n hp: %s\n mp: %s\n\n Abilityes: \n\n str: %s\n dex: %s\n con: %s\n inte: %s\n wis: %s\n cha: %s" %
          (player_params["hp"], player_params["mp"], player_params["str"], player_params["dex"],
           player_params["con"], player_params["int"], player_params["wis"], player_params["cha"]))


def _get_playerlist():
    """Функция получения списка персонажей"""
    players = TDB.table("players")

    try:
        players_exists = players.all()[0]
    except IndexError:
        print("Characters not found!")
        return 0

    else:

        print("Character list:")

        for i in range(0, len(players), 1):
            print("№ %d  Name: %s | Years old: %s | Class: %s | Coordinates: %s | HP: %s | MP: %s " % (
                i + 1, players_exists["name"], players_exists["age"], players_exists["class"], players_exists["coor"], players_exists["hp"], players_exists["mp"]))


def save_char(player_params, player_coor):
    """Функця сохранения персонажа"""
    query = Query()
    players = TDB.table("players")
    players.update({"age": player_params["age"], "coor": "%s, %s" % (player_coor[0], player_coor[1]), "hp": player_params["hp"], "mp": player_params["mp"], "str": player_params["str"],
                    "dex": player_params["dex"], "con": player_params["con"], "int": player_params["int"], "wis": player_params["wis"], "cha": player_params["cha"], "name": player_params["name"]}, query.name == player_params["name"])


def play_start(player_params, debug_mode=0, maps_path=header.MAPS_PATH, map_file="default_map", recursion_count=0, location_shell=""):
    """Игровой процесс"""
    if debug_mode != 1:
        inside.util.clear()

    map = open(maps_path % map_file, "r", encoding="utf-8").read().split(("\n"))
    global_player_coor = player_params["coor"]

    if player_params["coor"] == "(0, 0)" and recursion_count == 0:
        player_coor = inside.map.get_player_spawn(map)

    elif recursion_count != 0:
        player_coor = list(inside.map.get_player_spawn(map))

    else:
        player_coor = player_params["coor"].split(",")
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
                player_coor = inside.map.get_map_detail(
                    map, player_coor, player_params, motion_vector="top")

            if debug_mode == 1:
                print(player_coor)

        elif query in ("South", "S"):  # Передвижение юг
            map_notation = inside.map.get_map_point(
                map, (player_coor[0], player_coor[1] + 1))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[1] += 1
                player_coor = inside.map.get_map_detail(
                    map, player_coor, player_params, motion_vector="bottom")

            if debug_mode == 1:
                print(player_coor)

        elif query in ("West", "W"):  # Передвижение на запад
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] - 1, player_coor[1]))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] -= 1
                player_coor = inside.map.get_map_detail(
                    map, player_coor, player_params, motion_vector="left")

            if debug_mode == 1:
                print(player_coor)

        elif query in ("East", "E"):  # Передвижение на восток
            map_notation = inside.map.get_map_point(
                map, (player_coor[0] + 1, player_coor[1]))

            if map_notation == "#":  # Если персонаж упирается в стену, то дальше ему нельзя идти
                print("You can't go to this side. There is a wall.")

            else:
                player_coor[0] += 1
                player_coor = inside.map.get_map_detail(
                    map, player_coor, player_params, motion_vector="right")

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
                player_coor = inside.map.get_map_detail(map, player_coor, player_params)

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
                player_coor = inside.map.get_map_detail(map, player_coor, player_params)

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
                player_coor = inside.map.get_map_detail(map, player_coor, player_params)

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
                player_coor = inside.map.get_map_detail(map, player_coor, player_params)

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

    player_hp = int(player_params["hp"])
    hight_player_hp = player_hp

    player_mp = int(player_params["mp"])
    hight_player_mp = player_mp

    player_int = player_params["int"]
    player_wis = player_params["wis"]

    player_str = player_params["str"]
    player_con = player_params["con"]

    player_coeff = round(player_hp / player_mp, 1)

    enemy_danger_coeff = round(math.fabs(enemy_params[2] / player_coeff), 1)

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

        elif query == "Pass":
            player_attacking = True

        elif query in ("Myparams", "Mp"):
            print("\nHP: %s \nMP: %s \n" % (player_hp, player_mp))

        elif query in ('Magic', 'M'):
            print("\nEnemy coefficent: %s | Your player coefficent: %s | You have: %s MP and %s HP\n" %
                  (enemy_danger_coeff, player_coeff, player_mp, player_hp))

            print("This is your spells: \n")

            for i in range(0, len(header.MAGIC_SPELLS_NAMES), 1):
                print("№%s %s| MP Cost: %s | Damage Bonus: %s | Minimal Player Coefficent: %s\n" % (
                    i + 1, header.MAGIC_SPELLS_NAMES[i],
                    header.MAGIC_SPELLS[header.MAGIC_SPELLS_NAMES[i]]["spell_cost"],
                    header.MAGIC_SPELLS[header.MAGIC_SPELLS_NAMES[i]]["damage_bonus"],
                    header.MAGIC_SPELLS[header.MAGIC_SPELLS_NAMES[i]]["min_player_coeff"]))

            spell_choice = string.capwords(input("Input spel name: "))

            try:
                spell_cost = header.MAGIC_SPELLS[spell_choice]["spell_cost"]
            except KeyError:
                inside.util.cprint("Spell not found!", foreground="red", background="white")
                print("You can't read %s - this is not spell." % spell_choice)

            else:

                if player_coeff < header.MAGIC_SPELLS[spell_choice]["min_player_coeff"]:
                    print("Sorry. Your player coefficent is %s, but '%s' spell required minimal coefficent not less %s." % (
                        player_coeff, spell_choice,  header.MAGIC_SPELLS[spell_choice]["min_player_coeff"]))

                elif spell_choice in header.MAGIC_SPELLS_NAMES and player_mp - spell_cost >= 0:
                    player_damage = math.ceil(
                        header.MAGIC_SPELLS[spell_choice]["damage_bonus"] + player_int)
                    print('\nYou inflicted', player_damage, 'damage.')
                    enemy_hp -= player_damage

                    print("Enemy have", enemy_hp, "hp.")

                    print(header.MAGIC_DAMAGE_DETAIL[
                        spell_choice] % nprand.choice(header.BODY_PARTS))

                    spell_effect = inside.util.get_spell_effect(
                        spell_choice, enemy_danger_coeff)

                    if spell_effect[0] == "block_enemy_action":
                        block_enemy_action = spell_effect[1]
                        continue
                    else:
                        pass
                    player_attacking = True

                    player_mp -= spell_cost

                    print("You have %s mp.\n" % (player_mp))

                elif player_mp - spell_cost < 0:
                    print("You have %s mp. You need %s mp" %
                          (player_mp, spell_cost - player_mp))

                    player_attacking = False

        if enemy_hp <= 0:
            print("%s is dead." % enemy_params[3])
            return ["enemy_dead"]

        elif block_enemy_action == 0 and player_attacking == True:

            if enemy_params[3] in header.POTENTIAL_ENEMY_LIST:
                enemy_damage = int(enemy_params[1] * math.sqrt(enemy_danger_coeff))
                player_hp -= enemy_damage

                print(enemy_params[3], "has caused you", enemy_damage, "damage.")
                print("You have %s hp" % player_hp)

                player_attacking = False
            else:
                enemy_damage = int(enemy_params[1] * math.sqrt(enemy_danger_coeff))
                player_hp -= enemy_damage

                print(enemy_params[3], "has caused you", enemy_damage,
                      "damage by", nprand.choice(header.MAGIC_MBOSS_SPELLS))

                print("You have %s hp" % player_hp)

                player_attacking = False

        elif block_enemy_action > 0 and player_attacking == True:
            block_enemy_action -= 1
            print("Enemy action blocked for %s" % block_enemy_action)

        if player_hp <= 0:
            temples = TDB.table("temples")
            temples_count = len(temples.all())
            choiced_temple = nprand.choice(temples.all())
            inside.util.cprint("Unfortunately, you have died. You awake are transferred to the random temple.",
                               foreground="white", background="black")
            return ("player_die", choiced_temple["coor"])


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
            name = inside.player.new_player()
            query = Query()
            players = TDB.table("players")
            new_player_params = players.search(query.name == name)[0]
            _get_player_params(new_player_params)

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

                query = Query()
                players = TDB.table("players")
                player_params = players.search(query.name == player_name)

                if player_params != []:

                    play_start(player_params[0])

                else:
                    inside.util.cprint("Player not found! Try again", "red")

        else:
            inside.util.cprint(
                'Error! Command not found. Please type "help" ', 'red')
