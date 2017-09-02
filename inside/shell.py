""" Shell module """
import string
import inside

import sqlite3 as sqlite

# подключение к БД

CONNECT = sqlite.connect("game.db")
DB = CONNECT.cursor()

inside.util.db_check()

def _play_start(player_params, debug_mode=0):
    if debug_mode != 1:
            inside.util.clear()


def init(debug_mode=0):
    if debug_mode != 1:
            inside.util.clear()

    while True:
        query = string.capwords(input('$ '))
        if query == 'Help':
            print('Commands:\n Clear - For clear console \n Newplayer - Creating new player\n Infoclasses - Information about classes\n Exit - exit from shell')
        elif query == 'Clear':
            inside.util.clear()
        elif query == 'Newplayer':
            inside.player.new_player()
        elif query == 'Exit':
            inside.util.cprint('Good Bye!', 'green', 'black')
            exit(0)
        elif query == 'Infoclasses':
            print('Mage - Mages wield the elements of fire, frost, and arcane to destroy or neutralize their enemies.\n They are a robed-cloth class that excels at dealing massive damage from afar, casting elemental bolts at a single target,\n or raining destruction down upon their enemies in a wide area of effect.\n Mages can also augment their allies spell-casting powers, summon food or drink to restore their friends,\n and even travel across the world in an instant by opening arcane portals to distant lands. Their arsenal includes some powerful buffs,\n debuffs, stuns, and snares, enabling them to dictate the terms of any fight.')
            print('Warriors - are a very powerful class, with the ability to tank or deal significant melee damage.\n The warriors Protection tree contains many talents to improve their survivability and generate threat versus monsters.\n Protection warriors are one of the main tanking classes of the game and are considered the "classic" tanking class.\n (They\'re also great flag carriers in PvP!) They also have two damage-oriented talent trees - Arms and Fury,\n the latter of which includes the talent  Titans Grip, which allows the warrior to wield two two-handed weapons at the same time.\n They are capable of strong melee AoE damage with spells such as  Whirlwind and  Bladestorm. A warrior fights while in a specific stance,\n which affects Rage generation.')
            print('Rouge - every town and city has its share of rogues. Most of them live up to the worst stereotypes of the class, making a living as burglars,\n assassins, cutpurses, and con artists. Often, these scoundrels are organized into a thieves’ guild or crime family.\n Plenty of rogues operate independently, but even they sometimes recruit apprentices to help them in their scams and heists.\n A few rogues make an honest living as locksmiths, investigators, or exterminators, which can be a dangerous\n job in a world where dire rats—and wererats—haunt the sewers.')
        elif query == 'Listplayers':
            players_names = list(DB.execute("select name from players"))

            if players_names == []:
                print("Characters not found!")
            
            else:

                print("Character list:")

                for i in range(0, len(players_names), 1):
                    print("№ %d  %s" % (i+1, players_names[i][0]))
            
        elif query == "Loadplayer":
            player_name = input("Input character name: ")

            player_params = list(DB.execute("select * from players where name='%s'" % player_name))

            _play_start(player_params)

        else:
            inside.util.cprint('Error! Command not found. Please type "help" ', 'red')
