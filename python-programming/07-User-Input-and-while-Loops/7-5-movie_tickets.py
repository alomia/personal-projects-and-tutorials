#!/usr/bin/python3
# Ask users their age and then tell them the cost of their movie ticket.
prompt = "Enter your age to find out the price of your movie ticket:"
prompt += "\n(Enter 'quit' when you are finished.): "

while True:
        age = input(prompt)

        if age == 'quit':
                break
        else:
                age = int(age)

                if age < 3:
                        print("Free admission.\n")
                elif age >= 3 and age <= 12:
                        print("The ticket price is: $10.\n")
                else:
                        print("The ticket price is: $15.\n")
