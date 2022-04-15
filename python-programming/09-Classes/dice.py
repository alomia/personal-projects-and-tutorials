from random import randint

class Dice:
        """simulates a die"""

        def __init__(self, sides = 6):
                """Initialize attributes of the parent class."""
                self.sides = sides
        
        def roll_die(self):
                """takes a random value and prints it"""
                print(f"Dice result: {randint(1, self.sides)}")
