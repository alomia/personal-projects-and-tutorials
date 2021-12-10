#!/usr/bin/python3
# ask the user to enter a series of ingredients for their pizza, until the value "quit" is entered.
prompt = "Enter the names of the ingredients you want to add to your pizza:"
prompt += "\n(Enter 'quit' when you are finished.): "

while True:
        toppings = input(prompt)

        if toppings == 'quit':
                break
        else:
                print(f"{toppings.title()} added to pizza\n")
