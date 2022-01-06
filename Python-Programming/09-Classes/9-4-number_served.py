#!/usr/bin/python3
# Creation of a class defining a restaurant


class Restaurant:
        """A simple class that shapes a restaurant."""

        def __init__(self, _name, cuisine_type):
                """initialize _name and cuisine_type attributes."""
                self._name = _name
                self.cuisine_type = cuisine_type
                self.number_served = 0

        def describe_restaurant(self):
                """prints the two parameters passed to the class."""
                print(f"{self._name} is a {self.cuisine_type} restaurant.")

        def open_restaurant(self):
                """prints a message indicating that the restaurant is open."""
                print("The restaurant is open.")

        def set_number_served(self, clients_served):
                """establish the number of clients that have been served."""
                if clients_served >= self.number_served:
                        self.number_served = clients_served

        def increment_number_served(self, clients_served):
                """increases the number of customers served."""
                if clients_served >= 0:
                        self.number_served += clients_served

restaurant = Restaurant('Geranium', 'High-concept')

print(f"People served today at the restaurant: {restaurant.number_served}")

restaurant.number_served = 10
print(f"People served today at the restaurant: {restaurant.number_served}")

restaurant.set_number_served(30)
print(f"People served today at the restaurant: {restaurant.number_served}")

restaurant.increment_number_served(50)
print(f"People served today at the restaurant: {restaurant.number_served}")
