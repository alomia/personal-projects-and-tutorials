#!/usr/bin/python3
#greeting users on a list, personalized greeting to the administrator
user_list = ['andres', 'camilo', 'sebastian', 'admin', 'carlos', 'sergio']

if user_list:
    for user in user_list:
        if user == 'admin':
            print(f"Hello {user}, would you like to see a status report?")
        else:
            print(f"Hello {user.title()}, thank you for logging in again")
else:
    print("We need to find some users!")
