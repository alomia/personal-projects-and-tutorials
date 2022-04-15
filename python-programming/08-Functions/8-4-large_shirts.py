#!/usr/bin/python3
# which receives two arguments as shirt details.


def make_shirt(t_shirt_size = 'large', text = 'I love Python'):
        """displays a message with the specifications of the T-shirt."""
        print(f"Your t-shirt size is: {t_shirt_size}")
        print(f"The text your t-shirt will carry is: {text}")

make_shirt()
print()
make_shirt('Medium')
print()
make_shirt('Medium', 'I love to program')
