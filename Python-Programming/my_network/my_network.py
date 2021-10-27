#!/usr/bin/python3
print("Welcome to ... ")
print(""" 
                     _     _                      _  
  /\/\  _   _    /\ \ \___| |___      _____  _ __| | __
 /    \| | | |  /  \/ / _ \ __\ \ /\ / / _ \| '__| |/ /
/ /\/\ \ |_| | / /\  /  __/ |_ \ V  V / (_) | |  |   < 
\/    \/\__, | \_\ \/ \___|\__| \_/\_/ \___/|_|  |_|\_\\
        |___/                                          
""")
name = input("What is your name?: ")
print()
print("Hello ", name, ", welcome to My Network")
print()

yearBirth = int(input("Enter your year of birth: "))
ege = 2021 - yearBirth - 1
print()

height = float(input("How long is it in meters?: "))
height_m = int(height)
height_cm = (height - height_m) * 100

friends = int(input("number of friends?: "))

print()
print("Very good, ", name, ". Can we create a profile with this data?")
print("--------------------------------------------------")
print("Name:    ", name)
print("Ege:     ", ege, "years")
print("Height:  ", height_m, "meters")
print("Friends: ", friends)
print("--------------------------------------------------")
print("Thanks for the information I hope you enjoy my network")
print()

message = input("Let's publish your first message. What are you thinking?: ")
print()
print("--------------------------------------------------")
print(name, "says: ", message)
print("--------------------------------------------------")
