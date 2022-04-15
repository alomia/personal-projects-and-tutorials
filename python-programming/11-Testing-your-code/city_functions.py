def get_city_country(city, country, population=''):
        """returns a single string with city and country"""
        if population:
                city_country = f"{city}, {country} - population {population}"
        else:
                city_country = f"{city}, {country}"
        return city_country.title()
