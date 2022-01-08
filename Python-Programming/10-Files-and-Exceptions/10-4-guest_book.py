#!/usr/bin/python3
# Guest Book

filename = 'guest_book.txt'
print("To exit the program enter q or exit.\n")

while True:
        name = input("Enter your name: ")

        if name == 'q' or name == 'exit':
                print('Bye-Bye')
                break

        print(f"Hi {name.title()}, hope you are well.\n")

        with open(filename, 'a') as file_object:
                file_object.write(f'{name.title()}\n')
