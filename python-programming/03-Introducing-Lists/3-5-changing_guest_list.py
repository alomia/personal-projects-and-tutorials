#!/usr/bin/python3
#list of friends invited to dinner
guests = ['nipsey hussle', 'chris brown', 'nicki minaj', 'travis scott', 'rihanna', 'alicia keys']
invitation_message = "how are you? I invited you to my dinner."

print(f"Hi {guests[0].title()} {invitation_message}")
print(f"Hi {guests[1].title()} {invitation_message}")
print(f"Hi {guests[2].title()} {invitation_message}")
print(f"Hi {guests[3].title()} {invitation_message}")
print(f"Hi {guests[4].title()} {invitation_message}")
print(f"Hi {guests[5].title()} {invitation_message}\n")

cannot_attend = guests.pop(0)
print(f"{cannot_attend.title()} will not be able to attend the dinner\n")
guests.insert(0, 'kendrick lamar')

print(f"Hi {guests[0].title()} {invitation_message}")
print(f"Hi {guests[1].title()} {invitation_message}")
print(f"Hi {guests[2].title()} {invitation_message}")
print(f"Hi {guests[3].title()} {invitation_message}")
print(f"Hi {guests[4].title()} {invitation_message}")
print(f"Hi {guests[5].title()} {invitation_message}")

