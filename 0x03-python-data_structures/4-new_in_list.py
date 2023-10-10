#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    count = len(my_list) - 1
    if idx >= 0 and idx <= count:
        list = [x for x in my_list]
        list[idx] = element
        return list
    return my_list
