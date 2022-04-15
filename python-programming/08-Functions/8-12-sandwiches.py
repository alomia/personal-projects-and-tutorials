#!/usr/bin/python3
# function that displays the ingredients you have added to your sandwich.


def make_sandwich(*toppings):
        """prints a list of the ingredients you have added to your sandwich."""
        print("The ingredients he added to his sandwich are:")
        for topping in toppings:
                print(f"- {topping}")

make_sandwich('pepperoni')
make_sandwich('mushrooms', 'green peppers', 'extra cheese')
make_sandwich('mushrooms', 'pepperoni', 'green peppers', 'extra cheese')
