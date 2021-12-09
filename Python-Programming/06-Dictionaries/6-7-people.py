#!/usr/bin/python3
# Dictionaries representing different people.
user_0 = {
        'username': 'efermi',
        'first': 'enrico',
        'last': 'fermi',
}

user_1 = {
        'username': 'paulabow05',
        'first': 'paula',
        'last': 'bowman',
}

user_2 = {
        'username': 'melomc',
        'first': 'melodie',
        'last': 'mccullough',
}

people = [user_0, user_1, user_2]


for person in people:
        for key, value in person.items():
                complete_information = f"{key}: {value}"
                print(complete_information.title())
        print()
