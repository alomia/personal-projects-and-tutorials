from user import User

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
