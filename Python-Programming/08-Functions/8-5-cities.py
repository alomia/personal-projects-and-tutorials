#!/usr/bin/python3
# function that asks for two arguments to display a message about a city and the country it belongs to
def describe_city(city, country = 'Canada'):
        """displays a message of the city and country to which it belongs."""
        print(f"{city.title()} is a city in {country.title()}")

describe_city('Toronto')
describe_city('Medellin', 'Colombia')
describe_city('Sydney', 'Australia')