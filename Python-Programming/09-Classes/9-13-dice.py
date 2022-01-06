#!/usr/bin/python3
#roll dice

from dice import Dice

print("6-sided dice:")
side = Dice()
for roll in range(1, 10):
        side.roll_die()

print("\n10-sided dice:")
side = Dice(10)
for roll in range(1, 10):
        side.roll_die()

print("\n20-sided dice:")
side = Dice(20)
for roll in range(1, 10):
        side.roll_die()
