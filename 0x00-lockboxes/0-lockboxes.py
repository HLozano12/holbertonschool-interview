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

    # the first box is always open
    	list = [0]
    # keep track of the boxes that have been opened
    	for box in range(len(boxes)):
        # if the box is already opened, skip it
        	for test_key in range(box, len(boxes)):
            		if test_key in list:
                		for key in boxes[test_key]:
                    			if key not in list:
                        			[list.append(key)]
    # if all the boxes have been opened, return True
    	for BoxKey in range(len(boxes)):
        	if BoxKey not in list:
            		return False
    	return True