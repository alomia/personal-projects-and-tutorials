#!/usr/bin/python3
# Create a User class and instantiate multiple users
from time import sleep


class User:
        """Create a class called user with two attributes."""

        def __init__(self, first_name, last_name, username, email, location):
                """initialize first_name and last_name attributes."""
                self.first_name = first_name.title()
                self.last_name = last_name.title()
                self.username = username
                self.email = email
                self.location = location.title()
                self.login_attempts = 0

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

        def increment_login_attempts(self):
                """increase the value of login_attempts by 1"""
                self.login_attempts += 1

        def reset_login_attempts(self):
                """resets the value of login_attempts to 0."""
                self.login_attempts = 0

melvin = User('melvin', 'garcia', 'mel_garcia', 'Megarcia@gmail.com', 'United States')

for attempt in range(5):
        melvin.increment_login_attempts()
        print('\ntrying to enter the account, one moment', end="")
        for point in range(5):
                sleep(0.5)
                print('.', end="")

print(f"\nAccess attempts: {melvin.login_attempts}")

for attempt in range(1):
        print("\nreset the number of attempts", end="")
        for point in range(5):
                sleep(1)
                print('.', end="")

melvin.reset_login_attempts()
print(f"\nAccess attempts: {melvin.login_attempts}")
