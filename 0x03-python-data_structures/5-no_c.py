#!/usr/bin/python3
def no_c(my_string):
    for letter in my_string:
        new_string = my_string.copy()
        if letter != 'c' or letter != 'C':
            return new_string
