#!/usr/bin/python3
# Imported Admin
from user import User, Admin

jose = Admin('jose', 'smith', 'smithjose', 'jose_smith123@gmail.com', 'Miami')
jose.privileges.privileges = [
        'can add post',
        'can delete post',
        'can ban user'
]

jose.describe_user()
jose.privileges.show_privileges()
