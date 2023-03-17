#!/usr/bin/env python3
filename='input.txt'
with open(filename) as file:
    while (line := file.readline().rstrip()):
        print(line)