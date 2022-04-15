#!/usr/bin/python3
# Verify User

import json


def get_stored_username():
        """Get stored username if available."""

        filename = 'username.json'
        try:
                with open(filename) as f:
                        username = json.load(f)
        except FileNotFoundError:
                return None
        else:
                return username


def get_new_username():
        """Prompt for a new username."""
        username = input("What is your name? ")
        filename = 'username.json'
        with open(filename, 'w') as f:
                json.dump(username, f)
        return username


def verify_user():
        """verifies if the user is the correct one"""

        if get_stored_username():
                option = input(f"Are you {get_stored_username()}? (y/n) ")
                return option


def greet_user():
        """Greet the user by name."""

        option = verify_user()
        username = get_stored_username()
        if username and option == 'y':
                print(f"Welcome back, {username}!")
        else:
                username = get_new_username()
                print(f"We'll remember you when you come back, {username}!")

greet_user()
