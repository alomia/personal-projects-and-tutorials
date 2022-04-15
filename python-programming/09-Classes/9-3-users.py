#!/usr/bin/python3
# Create a User class and instantiate multiple users


class User:
        """Create a class called user with two attributes."""

        def __init__(self, first_name, last_name, username, email, location):
                """initialize first_name and last_name attributes."""
                self.first_name =  first_name.title()
                self.last_name = last_name.title()
                self.username = username
                self.email = email
                self.location = location.title()

        def describe_user(self):
                """prints a summary of user information."""
                print(f"\nFirst name: {self.first_name}")
                print(f"Last name: {self.last_name}")
                print(f"Username: {self.username}")
                print(f"Email: {self.email}")
                print(f"Location: {self.location}")

        def greet_user(self):
                """prints a personalized greeting to the user."""
                print(f"\nHi {self.first_name}, how are you?")

user_1 = User('melvin', 'garcia', 'mel_garcia', 'Megarcia@gmail.com', 'United States')
user_1.describe_user()
user_1.greet_user()

user_2 = User('grace', 'burton', 'burton_1231', 'GraceBton@hotmail.com', 'United Kingdom')
user_2.describe_user()
user_2.greet_user()
