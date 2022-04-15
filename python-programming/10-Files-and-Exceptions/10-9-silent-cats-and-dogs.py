#!/usr/bin/pyuthon3
# Silent Cats and Dogs


def readFile(filename):
        try:
                with open(filename) as f:
                        lines = f.readlines()
        except FileNotFoundError:
                pass
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
