#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


def canUnlockAll(boxes):
	"""
	Args:
		boxes: list of lists with ints
	Returns:
		True if all boxes can be opened, False otherwise
	"""

	if type(boxes) is not list:
		return False
	# if there are no boxes, return True
	if len(boxes) == 0:
		return False
	for key in range(1, len(boxes) - 1):
		viewed = False
	# if the key is not in the list of keys, return False
		for index in range(len(boxes)):
			viewed = key in boxes[index] and key != index
			# print(key, index, viewed)
			if viewed:
				break
			if viewed is False:
				return viewed
	return True
