#!/usr/bin/python3

number_list = range(1, 10)

for number in number_list:
    if number == 1:
        print(f"{number}st", end=" ")
    elif(number == 2):
        print(f"{number}nd", end=" ")
    elif(number == 3):
        print(f"{number}rd", end=" ")
    else:
        print(f"{number}th", end=" ")
print("")