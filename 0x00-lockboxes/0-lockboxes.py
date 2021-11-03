#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""

def canUnlockAll(boxes):
	"""
	Args:
		boxes: list of lists with ints
	Returns:
		True if all boxes can be opened, False otherwise
	"""

	if not boxes:
		return False
	
	j = []
	total = len(boxes)

	for keys in boxes:
		if len(keys) == 0 and keys is not boxes[total-1]:
			return False
			for i in range(len(keys)):
				if keys[i] in j:
					return False
				j.append(keys[i])
				if keys[i] == 0:
					return True
				else:
					return False
						