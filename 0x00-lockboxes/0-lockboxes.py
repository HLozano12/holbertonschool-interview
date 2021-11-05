#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


def canUnlockAll(boxes):
	"""
	Write a method that determines if all the boxes can be opened
	"""
	if not boxes:
		return False
	if len(boxes) == 1:
		return True
	if len(boxes) == 2:
		if boxes[0] == 0 or boxes[1] == 0:
			return True
		else:
			return False
	if len(boxes) == 3:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0:
			return True
		else:
			return False
	if len(boxes) == 4:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0:
			return True
		else:
			return False
	if len(boxes) == 5:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0 or boxes[4] == 0:
			return True
		else:
			return False
	if len(boxes) == 6:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0 or boxes[4] == 0 or boxes[5] == 0:
			return True
		else:
			return False
	if len(boxes) == 7:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0 or boxes[4] == 0 or boxes[5] == 0 or boxes[6] == 0:
			return True
		else:
			return False
	if len(boxes) == 8:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0 or boxes[4] == 0 or boxes[5] == 0 or boxes[6] == 0 or boxes[7] == 0:
			return True
		else:
			return False
	if len(boxes) == 9:
		if boxes[0] == 0 or boxes[1] == 0 or boxes[2] == 0 or boxes[3] == 0 or boxes[4] == 0 or boxes[5] == 0 or boxes[6] == 0 or boxes[7] == 0 or boxes[8] == 0:
			return True
		else:
			return False
