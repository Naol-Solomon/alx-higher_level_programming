#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    number = 0
    for item in range(x):
        try:
            print(my_list[item], end="")
            number += 1
        except IndexError:
            pass
        print()
        return number
