#!/usr/bin/python3
# get a string with the name of the city and country.
from city_functions import get_city_country

city = input("Enter city: ")
country = input("Enter country: ")

print(get_city_country(city, country))
