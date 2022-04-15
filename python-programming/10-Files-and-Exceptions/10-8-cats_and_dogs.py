#!/usr/bin/pyuthon3
# Cats and Dogs


def readFile(filename):
        try:
                with open(filename) as f:
                        lines = f.readlines()
        except FileNotFoundError:
                print(f"The {filename} file you are trying to read does not exist.")
        else:
                for line in lines:
                        print(line.rstrip())

filenames = ['cats.txt', 'dogs.txt', 'does_not_exist.txt']

print("Cats names:")
readFile(filenames[0])

print("\nDogs names:")
readFile(filenames[1])

print("\nFile does not exist:")
readFile(filenames[2])
