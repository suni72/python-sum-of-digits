#!/usr/bin/env python

from __future__ import print_function
try:
    import readline
except ImportError:
    pass

def sum_of_digits(digit_string):
    """Return the sum of the digits in the digit string."""
    return -1

if __name__ == '__main__':
    digit_string = raw_input('Sum digits of this number: ')
    sum = sum_of_digits(digit_string)
    print('Sum of digits: {0}'.format(sum))
