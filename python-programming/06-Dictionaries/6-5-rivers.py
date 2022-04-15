#!/usr/bin/python3
rivers = {
        'amazon': 'colombia',
        'Mississippi': 'United States',
        'nile': 'egypt',
}

for key, value in rivers.items():
        print(f"The {key.title()} runs through {value.title()}")
