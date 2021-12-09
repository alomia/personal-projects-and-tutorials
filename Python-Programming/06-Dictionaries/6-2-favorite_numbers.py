#!/usr/bin/python3
# Use a dictionary to store people’s favorite numbers
favorite_numbers = {
        'gaspar': 6,
        'luis': 13,
        'marcelo': 8,
        'rosario': 5,
        'tomas': 25,
}

for key, value in favorite_numbers.items():
        print(f"{key.title()} favorite number is {value}")