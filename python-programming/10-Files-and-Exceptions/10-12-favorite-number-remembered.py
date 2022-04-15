#!/usr/bin/python3
# Favorite Number Remembered

import json

filename = 'favoritenumber.json'

try:
        with open(filename) as f:
                favoriteNumber = json.load(f)

except FileNotFoundError:
        favoriteNumber = input("What is your favorite number: ")
        with open(filename, 'w') as f:
                json.dump(favoriteNumber, f)
        print("Thanks, I'll remember that.")
else:
        print(f"I know your favorite number! It's {favoriteNumber}.")
