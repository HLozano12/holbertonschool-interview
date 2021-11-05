#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


def canUnlockAll(boxes):
	"""
	Write a method that determines if all the boxes can be opened
	"""
	lock = [0], viewed = [0]

    	while viewed < len(lock):
        	viewed = len(lock)
        for box in range(len(boxes)):
            if box in lock:
                for key in boxes[box]:
                    if key < len(boxes) and key not in lock:
                        lock.append(key)

    	return len(lock) == len(boxes)
