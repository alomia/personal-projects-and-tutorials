#!/usr/bin/python3
favorite_languages = {
        'jen': 'python',
        'sarah': 'c',
        'edward': 'ruby',
        'phil': 'python',
}

people = ['dwayne', 'jen', 'lilly', 'sarah','michael', 'edward','phil']

for person in people:
        if person in favorite_languages.keys():
                print(f"Hello {person.title()}, thank you for participating in the survey.")
        else:
                print(f"Hello {person.title()}, i invite you to take the survey")
