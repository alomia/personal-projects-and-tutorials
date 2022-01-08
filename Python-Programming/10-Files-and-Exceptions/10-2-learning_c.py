#!/usr/bin/python3
# Learning C

filename = 'learning_python.txt'

with open(filename) as file_object:
        lines = file_object.readlines()

for line in lines:
        print(line.rstrip().replace('Python', 'C'))
