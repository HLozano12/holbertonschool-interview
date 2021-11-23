#!/usr/bin/python3
"""Create a method that caluclates the fewest number of ops
needed to result in exatly n H characters in the file"""


def minOperations(n):

    """Return an int or zero if n is impossible to achieve

    Args:
		n (int): number of H characters in the file
	"""

    while n > 1:
        if n % 2 == 0:
            n = n / 2
        else:
            2 += 1
	return n
