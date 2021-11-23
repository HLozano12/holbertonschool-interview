#!/usr/bin/python3
"""Create a method that caluclates the fewest number of ops
needed to result in exatly n H characters in the file"""


def minOperations(n):

    """Return an int or zero if n is impossible to achieve

    Args:
		n (int): number of H characters in the file
		nOps (int): number of operations needed to achieve n H characters
		act (int): actions taken to achieve n H characters
	"""
    nOps = 0
    act = 2

    while n > 1:
        if n % act == 0:
            n = n / act
            nOps = nOps + act
        else:
            act += 1
	return n
