#!/usr/bin/python3
# which receives two arguments as shirt details.
def make_shirt(t_shirt_size, text):
        """displays a message with the specifications of the T-shirt."""
        print(f"Your t-shirt size is: {t_shirt_size}")
        print(f"The text your t-shirt will carry is: {text}")

make_shirt('M', 'Python')
print()
make_shirt(text = 'Hello World', t_shirt_size = 'L')
