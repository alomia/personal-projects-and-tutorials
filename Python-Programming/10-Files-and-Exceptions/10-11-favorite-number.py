#!/usr/bin/python3
# Favorite Number

import json

favoriteNumber = input("What is your favorite number: ")
filename = 'favoritenumber.json'
with open(filename, 'w') as f:
        json.dump(favoriteNumber, f)
