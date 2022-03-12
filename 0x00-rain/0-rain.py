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

	'''
	Find the highest wall and the lowest wall
	Calculate the water retained in the walls
	Water can only be reatined in the lowest wall
	'''
	while h <= len(walls)-1:
		left_dam = max(walls[:h + 1])
		right_dam = max(walls[h:])
		rain += max(min(left_dam, right_dam) - walls[h], 0)
		h += 1

	'''
	Return the water retained in the walls
	'''
	return rain