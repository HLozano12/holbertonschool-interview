#!/usr/bin/python3
"""Write a method that determines if all the boxes can be opened"""


def canUnlockAll(boxes):
    # Initialize a list of keys
    KeysView = [0]
    prevBox = 0
    # Loop through the list of boxes
    while prevBox < len(KeysView):
        prevBox = len(KeysView)
        for box in range(len(boxes)):
            if box in KeysView:
                for key in boxes[box]:
                    if key < len(boxes) and key not in KeysView:
                        KeysView.append(key)
    # Return True if all the boxes can be opened
    return len(KeysView) == len(boxes)
