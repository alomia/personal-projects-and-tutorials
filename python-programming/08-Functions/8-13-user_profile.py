#!/usr/bin/python3
# function that returns the information by means of a dictionary.


def build_profile(first, last, **user_info):
        """Build a dictionary containing everything we know about a user."""
        user_info['first_name'] = first
        user_info['last_name'] = last
        return user_info

user_profile = build_profile('alejandro', 'alomia',
                                city='cali',
                                education='holberton school',
                                field='computer science')

print(user_profile)
