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
print(f"Hi {guests[5].title()} {invitation_message}\n")

print("I found a larger table for the new guests.\n")

guests.insert(0, 'drake')
guests.insert(3, 'beyoncé')
guests.append('adele')

print(f"Hi {guests[0].title()} {invitation_message}")
print(f"Hi {guests[1].title()} {invitation_message}")
print(f"Hi {guests[2].title()} {invitation_message}")
print(f"Hi {guests[3].title()} {invitation_message}")
print(f"Hi {guests[4].title()} {invitation_message}")
print(f"Hi {guests[5].title()} {invitation_message}")
print(f"Hi {guests[6].title()} {invitation_message}")
print(f"Hi {guests[7].title()} {invitation_message}")
print(f"Hi {guests[8].title()} {invitation_message}\n")

print("I can only invite two people to dinner\n")
apology_message = 'my new table did not arrive you are no longer invited, sorry.'

uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(0)
print(f"Hi {uninvited.title()} {apology_message}")
uninvited = guests.pop(1)
print(f"Hi {uninvited.title()} {apology_message}\n")

print(f"Hi {guests[0].title()} the invitation is still open, hope to see you!")
print(f"Hi {guests[1].title()} the invitation is still open, hope to see you!")

del guests[0]
del guests[0]

print(guests)
