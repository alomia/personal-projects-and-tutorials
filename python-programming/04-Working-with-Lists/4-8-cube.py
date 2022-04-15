#!/usr/bin/python3
#list of the first 10 cubes
cubes = []

for value in range(1, 11):
    cubes.append(value ** 3)

for value in cubes:
    print(value)

#4-10. Slices
print("\nThe first three items in the list are:")
for item in cubes[:3]:
    print(item)

print("\nThree items from the middle of the list are:")
for item in cubes[4:7]:
    print(item)

print("\nThe last three items in the list are:")
for item in cubes[-3:]:
    print(item)