#!/usr/bin/python3
# list of sandwiches
sandwich_orders = ['Hot chicken', 'Montreal', 'Elvis', 'Cubano', 'BLT', 'Club']
finished_sandwiches = []

while sandwich_orders:

        sandwith_confirmed = sandwich_orders.pop()

        print(f"{sandwith_confirmed} sandwith is ready.")

        finished_sandwiches.append(sandwith_confirmed);

print("\n--- Total sandwiches made ---")
for finished_sandwiche in finished_sandwiches:
        print(finished_sandwiche)
