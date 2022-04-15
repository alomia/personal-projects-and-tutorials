#!/usr/bin/python3
# function to format a string


def city_country(city, country):
        """returns a formatted string, city, country"""
        formatted_string = f"{city}, {country}"
        return formatted_string.title()

print(city_country('santiago', 'chile'))
print(city_country('bogota', 'colombia'))
print(city_country('buenos aires','argentina'))