#!/usr/bin/python3
# test the get_city_country function
import unittest
from city_functions import get_city_country


class CitiesTestCase(unittest.TestCase):
        """Tests for 'city_functions.py'."""

        def test_city_country(self):
                """Do cities like "Santiago, Chile" work?"""
                Formatted_city = get_city_country('santiago', 'chile')
                self.assertEqual(Formatted_city, 'Santiago, Chile')

        def test_city_country_population(self):
                """Do cities like "Santiago, Chile - population 5000000" work?"""
                Formatted_city = get_city_country('santiago', 'chile', 5000000)
                self.assertEqual(Formatted_city, 'Santiago, Chile - Population 5000000')

if __name__ == '__main__':
        unittest.main()
