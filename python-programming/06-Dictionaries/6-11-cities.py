#!/usr/bin/python3
# Create a dictionary with information about each city
cities = {
        'medellin': {
                'country': 'colombia',
                'population': '2.569.000',
                'fact': 'city of eternal spring',
        },

        'vancouver':  {
                'country': 'canada',
                'population': '675.218',
                'fact': 'Vancouver Art Gallery is known for its works by regional artists.',
        },

        'miami':  {
                'country': 'united states',
                'population': '454.279',
                'fact': 'is the eighth largest metropolitan area in the country.',
        },
}

for city, city_information in cities.items():
        print(f"{city.upper()}:")
        for datum, information in city_information.items():
                print(f"\t{datum.title()}: {information.title()}")
        print()
