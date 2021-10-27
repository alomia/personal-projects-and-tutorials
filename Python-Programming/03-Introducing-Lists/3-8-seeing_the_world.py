#!/usr/bin/python3
#I create a list of places I want to visit, and then I sort the list in different ways.
place_to_visit = [ 'vancouver', 'montreal', 'toronto','san francisco', 'giethoorn']

print("This is the original order of my list")
print(place_to_visit)

print("\nThis is my alphabetical list")
print(sorted(place_to_visit))

print("\nMy list in original order")
print(place_to_visit)

print("\nMy list in reverse alphabetical order")
print(sorted(place_to_visit, reverse=True))

print("\nMy list in original order")
print(place_to_visit)

place_to_visit.reverse()

print("\nMy inverted list")
print(place_to_visit)

place_to_visit.reverse()

print("\nBack to my original list order")
print(place_to_visit)

place_to_visit.sort()

print("\nI change my list to alphabetical order")
print(place_to_visit)

place_to_visit.sort(reverse=True)

print("\nChange my list to reverse alphabetical order")
print(place_to_visit)
