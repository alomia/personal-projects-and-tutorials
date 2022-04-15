#!/usr/bin/python3
# create a glossary using a python dictionary
glossary = {
        'for': 'A for loop is used for iterating over a sequence (that is either a list, a tuple, a dictionary, a set, or a string).',
        'variables': 'Variables are containers for storing data values.',
        'comments': 'Comments can be used to explain Python code.',
        'list': 'Lists are used to store multiple items in a single variable.',
        'dictionary': 'Dictionaries are used to store data values in key:value pairs.',
}

for key, value in glossary.items():
        print(f"{key.title()}\n\t{value}\n")