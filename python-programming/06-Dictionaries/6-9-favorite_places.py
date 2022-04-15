#!/usr/bin/python3
# Dictionary that stores the favorite places of some people
favorite_places = {
        'gloria': ['solo camping in utah, usa', 'inca trail, peru', 'torres del paine, Chile'],
        'tanner': ['prague, czech republic', 'south beach, miami, usa'],
        'stuart': ['sydney, australia', 'berlin, germany', 'são paulo, brazil'],
}

for name, places in favorite_places.items():
        print(f"\n{name.title()}'s favorite places are:")
        for place in places:
                print(f"\t{place.title()}")
