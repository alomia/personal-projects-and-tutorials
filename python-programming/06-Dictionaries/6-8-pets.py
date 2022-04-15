#!/usr/bin/python3
# Dictionaries representing different mascots.
pet_0 = {
        'type': 'cat',
        'name': 'tucker',
        'owner': 'leonard melton',
}

pet_1 = {
        'type': 'dog',
        'name': 'gunner',
        'owner': 'orla rich',
}

pet_2 = {
        'type': 'parrot',
        'name': 'perky',
        'owner': 'elmo durham',
}

pet_3 = {
        'type': 'rabbit',
        'name': 'frosty',
        'owner': 'gregory clarke',
}

pet_4 = {
        'type': 'dog',
        'name': 'wonky',
        'owner': 'thor carver',
}

pets = [pet_0, pet_1, pet_2, pet_3, pet_4]

for pet in pets:
        for key, value in pet.items():
                complete_information = f"{key}: {value}"
                print(complete_information.title())
        print()
