#!/usr/bin/python3
# Use a dictionary to store information about a person you know
person = {
        'first_name': 'john',
        'last_name': 'smith',
        'age': 28,
        'city': 'vancouver'
}

for value in person.values():
        if isinstance(value, str):
                print(value.title())
        else:
                print(value)
