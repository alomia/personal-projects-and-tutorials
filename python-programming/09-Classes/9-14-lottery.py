#!/usr/bin/python3
# Lottery

from random import choice

possibilities = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 'a', 'b', 'c', 'd', 'e']
winning_ticket = []

print("What is the winning ticket?...")

for count in range(1, 5):
        value = choice(possibilities)
        print(f"We pulled a {value}!")
        winning_ticket.append(value)

print("\nThe final winning ticket is: ", end="")

for i in winning_ticket:
        print(i, end=" ")
print()
