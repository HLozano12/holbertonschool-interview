#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


def canUnlockAll(boxes):
	"""
	Write a method that determines if all the boxes can be opened
	"""
	key = [0]
	lock = 0

	while key < len(lock):
		key = len(lock)
		for box in range(len(boxes)):
			if box in lock:
				continue
			for item in boxes[box]:
				if item in lock:
					lock.append(box)
					break
			else:
				continue
			break
		else:
			return False
