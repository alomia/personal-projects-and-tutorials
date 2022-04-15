#!/usr/bin/python3
# ask the user how many people are in his or her dinner group.
people = input("How many people are in your dinner group?: ")
people = int(people)

if people > 8:
        print("Sorry, there are no tables available, you will have to wait.")
else:
        print("Very well your table is ready.")
