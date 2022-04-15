#!/usr/bin/python3
# Common Words


def wordCount(filename, word):
        """Shows how many times a word appears in a file"""

        try:
                with open(filename) as f:
                        lines = f.readlines()
        except FileNotFoundError:
                print(f"File {filename} not found.")
        else:
                text = ''

                for line in lines:
                        text += line

                count = text.lower().count(f'{str(word).lower()} ')
                msg = f"'{word}' appears {count} times in the {filename} file."
                print(msg)

wordCount('alice.txt', 'the')
