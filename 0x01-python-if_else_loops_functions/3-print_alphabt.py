#!/usr/bin/python3
for letter in range(97, 127):
    if chr(letter)  != 'e' and chr(letter) != 'q':
        print("{}".format(chr(letter)), end="")
