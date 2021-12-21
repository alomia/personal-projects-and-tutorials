#!/usr/bin/python3
# function that prints a dictionary with information about a car.


def make_car(manufacturer, model, **car_info):
        """returns information about a car"""
        car_info['manufacturer'] = manufacturer
        car_info['model'] = model
        return car_info

car = make_car('BMW', 'X6 M50i',
                        color='black',
                        engine='M TwinPower Turbo',
                        launch='2021')
print(car)

car = make_car('subaru', 'outback', color='blue', tow_package=True)
print(car)
