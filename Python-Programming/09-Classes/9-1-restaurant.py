#!/usr/bin/python3
# Creation of a class defining a restaurant


class Restaurant:
        """A simple class that shapes a restaurant."""

        def __init__(self, _name, cuisine_type):
                """initialize _name and cuisine_type attributes."""
                self._name = _name
                self.cuisine_type = cuisine_type

        def describe_restaurant(self):
                """prints the two parameters passed to the class."""
                print(f"{self._name} is a {self.cuisine_type} restaurant.")

        def open_restaurant(self):
                """prints a message indicating that the restaurant is open."""
                print("The restaurant is open.")

restaurant = Restaurant('Geranium', 'High-concept')

print(restaurant._name)
print(restaurant.cuisine_type)

restaurant.describe_restaurant()
restaurant.open_restaurant()
