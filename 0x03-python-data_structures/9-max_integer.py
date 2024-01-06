#!/usr/bin/python3
def max_integer(my_list=[]):
    max = my_list[0]
    if (my_list == 0):
        return "None"
    for element in my_list:
        if (element > max):
            max = element
    return max