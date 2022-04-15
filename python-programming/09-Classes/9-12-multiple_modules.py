#!/usr/bin/python3
# Multiple Modules

from user import Admin

manuel = Admin('manuel', 'santo domingo', 'manuel_sd', 'manuel_sd123@gmail.com', 'new york')
manuel.privileges.privileges = [
        'can add post',
        'can delete post',
        'can ban user'
]

manuel.describe_user()
manuel.privileges.show_privileges()
