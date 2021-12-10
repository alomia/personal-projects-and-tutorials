#!/usr/bin/python3
# print a message with the name of my favorite book
def favorite_book(title):
        """prints a message with the name of the book passed as parameter"""
        print(f"One of my favorite books is {title.title()}.")

book_name = input("Name of the book: ")

favorite_book(book_name)
