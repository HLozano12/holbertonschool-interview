#!/usr/bin/python3
"""
Take in a 2D matrix and rotate it 90 degrees
"""


def rotate_2d_matrix(matrix):
    """
Rotate a 2D matrix 90 degrees
"""

# Transpose the matrix
for i in range(len(matrix)):
    for j in range(i, len(matrix)):
        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

# Reverse each row
for i in range(len(matrix)):
    matrix[i].reverse()
	
return matrix
