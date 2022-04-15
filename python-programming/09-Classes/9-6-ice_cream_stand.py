#!/usr/bin/python3

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


class IceCreamStand(Restaurant):
        """IceCreamStand"""

        def __init__(self, cousine_type):
                """"""
                super().__init__(self, cousine_type)
                self.flavors = []

        def Show_flavors(self):
                """Show ice cream flavors"""

                for flavor in self.flavors:
                        print(f"-{flavor.title()}.")

ice_Cream = IceCreamStand('ice cream')
ice_Cream.flavors = ['vanilla', 'chocolate', 'chocolate chip', 'butter pecan']
ice_Cream.Show_flavors()
