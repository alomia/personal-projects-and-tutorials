#!/usr/bin/python3

filename = input("file name: ")

if len(filename) > 0:
        with open(filename, 'a') as f:
                pass
        print("Create file...OK")
else:
        print("ERROR")
