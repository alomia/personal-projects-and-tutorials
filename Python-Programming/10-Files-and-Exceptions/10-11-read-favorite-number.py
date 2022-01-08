#!/usr/bin/python3
# read the favorite number

import json

filename = 'favoritenumber.json'
with open(filename) as f:
        favoriteNumber = json.load(f)
        print(f"I know your favorite number! It's {favoriteNumber}.")
