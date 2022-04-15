#!/usr/bin/python3
# import modules with functions in different ways


import sandwich
sandwich.make_sandwich('mushrooms', 'green peppers', 'extra cheese')

from sandwich import make_sandwich
make_sandwich('mushrooms', 'green peppers', 'extra cheese')

from sandwich import make_sandwich as fn
fn('mushrooms', 'green peppers', 'extra cheese')

import sandwich as mn
mn.make_sandwich('mushrooms', 'green peppers', 'extra cheese')

from sandwich import *
make_sandwich('mushrooms', 'green peppers', 'extra cheese')
