#!/usr/bin/python3
for letter in range(97, 127):
    if chr(letter)  != 'q' and chr(letter) != 'e':
        print("{}".format(chr(letter)), end="")
