""" Player functions module """

import numpy as np


def new_player():
    player_name = input("Input name: ")

    try:
        player_age = int(input("Input age of your character: "))

    except ValueError:
        # TODO: сделать нормальный вывод сообщений об ошибке

        print("Sorry, but input age is invalid. Pleas, try again.")

        while_exit = 0  # Для того, чтобы выйти из цикла, токо тогда, когда не словим исключение

        while while_exit != 1:
            try:
                player_age = int(input("Input age of your character: "))

            except ValueError:
                print("Sorry, but input age is invalid. Pleas, try again.")

            else:

                if player_age <= 0:
                    player_age = np.random.randint(11, 21)

                print(player_age)  # DEBUG string
                while_exit = 1
    
    else:
    
                if player_age <= 0:
                    player_age = np.random.randint(11, 21)

                print(player_age)  # DEBUG string
