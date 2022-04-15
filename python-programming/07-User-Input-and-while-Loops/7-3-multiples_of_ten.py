#!/usr/bin/python3
# Ask the user for a number, and then report whether the number is a multiple of 10 or not.
prompt = "Enter a number to find out if it is a multiple of ten."
prompt += "\nEnter number: "

multiple = input(prompt)
multiple = int(multiple)

if ((multiple // 10) * 10) == multiple:
        print(f"{multiple} is a multiple of 10.")
else:
        print(f"{multiple} is not a multiple of 10.")
