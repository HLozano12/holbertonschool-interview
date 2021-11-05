#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


from typing import KeysView


def canUnlockAll(boxes):
	"""
	Write a method that determines if all the boxes can be opened
	"""
	KeysView =[0]
	prevBox = 0

	while prevBox < len(KeysView):
		prevBox = len(KeysView)
		for box in range(len(boxes)):
			if box in KeysView:
				for key in boxes[box]:
					if key < len(boxes) and key not in KeysView:
						KeysView.append(key)
	return len(KeysView) == len(boxes)
