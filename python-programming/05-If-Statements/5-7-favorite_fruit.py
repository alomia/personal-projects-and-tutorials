#!/usr/bin/python3
#shows only the fruits I like
favorite_fruits = ['pineapples', 'hacedles', 'grapes']
list_fruits = ['apples', 'hacedles', 'pears', 'grapes', 'pineapples', ]

for fruit in list_fruits:
    if fruit in favorite_fruits:
        print(f"I really like {fruit.title()}!")
