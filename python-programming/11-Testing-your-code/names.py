#!/usr/bin/python3

from name_function import get_formatted_name

print("Enter 'q' at any time to quit.")

while True:
        first = input("\nPlease give me first name: ")
        if first == 'q':
                break
        last = input("Please give me last name: ")
        if last == 'q':
                break
        formatted_name = get_formatted_name(first, last)
        print(f"\tNeatrly formatted name: {formatted_name}")
