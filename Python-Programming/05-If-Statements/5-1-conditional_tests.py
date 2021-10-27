#!/usr/bin/python3
cars = ['subaru', 'audi', 'bmw', 'toyota']
car = 'subaru'

print(f"car = '{car}'")

for car2 in cars:
        if car2 == 'subaru':
            print(f'print("Is car == \'{car2}\'? I predict True.")')
            print(f"print(car == '{car2}')")
        else:
            print(f'\nprint("Is car == \'{car2}\'? I predict False.")')
            print(f"print(car == '{car2}')")