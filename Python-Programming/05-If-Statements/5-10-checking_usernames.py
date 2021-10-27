#!/usr/bin/python3
#check if a user name is already in a list
current_users = ['christopher', 'diana', 'carlos', 'fabian', 'carmen', 'eduardo']
new_users = ['christina', 'feLipe', 'edinson', 'Carlos', 'miguel', 'FABIAN']
current_users_lowe = [user.lower() for user in current_users]

for user in new_users:
    if user.lower() in current_users_lowe:
        print(f"Username {user} is not available and must be changed to a new username")
    else:
        print(f"Username {user} is available")