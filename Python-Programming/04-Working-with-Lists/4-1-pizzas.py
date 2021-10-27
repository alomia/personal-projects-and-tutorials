#!/usr/bin/python3
# displays messages about how much I love pizza
pizzas = ['neapolitan', 'siciliana', 'tonda romana']

for pizza in pizzas:
    print(f"I like {pizza.title()} pizza.")

print("I really like pizza")

# 4-11. My Pizzas, Your Pizzas
friend_pizzas = pizzas[:]

pizzas.append('pepperoni')
friend_pizzas.append('margherita')

print("\nMy favorite pizzas are:")
for pizza in pizzas:
    print(pizza)

print("\nMy friend’s favorite pizzas are:")
for pizza in friend_pizzas:
    print(pizza)
