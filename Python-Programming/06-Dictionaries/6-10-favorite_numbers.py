#!/usr/bin/python3
#After you have evolved from Exercise 6-2, each person can have more than one favorite number.
favorite_numbers = {
        'gaspar': [6, 23, 15],
        'luis': [13, 6, 2],
        'marcelo': [8, 7, 10, 17],
        'rosario': [5],
        'tomas': [25, 9],
}

for name, numbers in favorite_numbers.items():
        if len(numbers) >= 2:
                print(f"{name.title()} favorite numbers are: ", end="")
                for number in numbers:
                        print(f"{number}", end=" ")
        else:
                print(f"{name.title()} favorite number is: ", end="")
                for number in numbers:
                        print(f"{number}", end=" ")
        print("\n")