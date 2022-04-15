#!/usr/bin/python3
# Create three different instances of the Restaurant class.


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

first_restaurant = Restaurant('Geranium', 'High-concept')
second_restaurant = Restaurant('Disfrutar', 'avant-garde')
third_restaurant = Restaurant('Frantzen', 'modern')

first_restaurant.describe_restaurant()
second_restaurant.describe_restaurant()
third_restaurant.describe_restaurant()
