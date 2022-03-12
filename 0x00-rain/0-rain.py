#!/usr/bin/python3
"""
We are given a list of non-negative integers, which represent the height of the walls with unit of one.
We need to calculate how many units of water can be retained in the walls after it rains.
"""

'''
Given prototype:
'''
def rain(walls):

	rain = 0
	h = 0

	'''
	Find if list is empty or not
	'''
	if len(walls) == 0:
		return 0

	
	while i < len(walls):
		if walls[i] == 0:
			walls.pop(i)
			i -= 1
		i += 1
	return len(walls)