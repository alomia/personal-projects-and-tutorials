#!/usr/bin/python3
# there are no ingredients for pastrami.
sandwich_orders = ['Hot chicken', 'pastrami','Montreal', 'pastrami','Elvis', 'Cubano', 'pastrami','BLT', 'pastrami','Club']
finished_sandwiches = []

while sandwich_orders:

        if 'pastrami' in sandwich_orders:
                print("Sorry, at the moment we don't have ingredients to make a pastrami.")
                while 'pastrami' in sandwich_orders:
                        sandwich_orders.remove('pastrami')
        
        sandwith_confirmed = sandwich_orders.pop()

        print(f"{sandwith_confirmed} sandwith is ready.")

        finished_sandwiches.append(sandwith_confirmed);

print("\n--- Total sandwiches made ---")
for finished_sandwiche in finished_sandwiches:
        print(finished_sandwiche)
