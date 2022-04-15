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

class Admin(User):
        """creation of the Admin class"""

        def __init__(self, first_name, last_name, username, email, location):
                """attribute initialization"""
                super().__init__(first_name, last_name, username, email, location)
                self.privileges = Privileges()
        
class Privileges:
        """this class stores the methods and permissions of the admin user"""
        
        def __init__(self, privileges=[]):
                """initialized attributes"""
                self.privileges = privileges
        
        def show_privileges(self):
                """prints the privileges that the admin user has"""
                print("\nPrivileges:")
                if self.privileges:
                        for privilege in self.privileges:
                                print(privilege)
                else:
                        print("This user has no privileges.")

julian = Admin('Julian', 'Brown', 'jn_brown01', 'jualian@gmail.com', 'Chicago')
julian.privileges.privileges = [
        'can add post',
        'can delete post',
        'can ban user'
]

julian.describe_user()
julian.privileges.show_privileges()
