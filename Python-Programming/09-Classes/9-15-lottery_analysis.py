#!/usr/bin/python3
#Lottery Analysis
from random import choice

def generate_ticket(possibilities = [], ticket = []):
        for count in range(1, 5):
                value = choice(possibilities)
                ticket.append(value)

def print_ticket(ticket = []):
        for value in ticket:
                print(value, end=" ")
        print()

possibilities = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 'a', 'b', 'c', 'd', 'e']
my_ticket = []
winning_ticket = []
attempts = 0

generate_ticket(possibilities, my_ticket)
generate_ticket(possibilities, winning_ticket)

while my_ticket != winning_ticket:
        attempts+=1
        winning_ticket = []
        generate_ticket(possibilities, winning_ticket)

print(f"My ticket: ",end="")
print_ticket(my_ticket)
print(f"Winning ticket: ",end="")
print_ticket(winning_ticket)
print(f"It took {attempts} tries to win.")
