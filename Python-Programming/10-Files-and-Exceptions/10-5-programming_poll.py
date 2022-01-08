#!/usr/bin/python3
# Programming Poll

filename = 'programming_poll.txt'

print("To exit the program enter q or exit.\n")
print("This survey asks programmers why they like to program.")
while True:

        name = input("Enter your name: ")
        if name == 'q' or name == 'exit':
                print('Bye-Bye')
                break
        reply = input("Enter your answer: ")

        with open(filename, 'a') as file_object:
                file_object.write(f'{name.title()}\n')
                file_object.write(f"{reply}\n\n")
        print()
