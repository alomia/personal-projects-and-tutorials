#!/usr/bin/pythopn3
# Addition

try:
        num_1 = int(input("Enter first number: "))
        num_2 = int(input("Enter second number: "))
except ValueError:
        print(f"\nPlease enter a valid number.\n")
else:
        print(f"\nSum is {num_1 + num_2}")
