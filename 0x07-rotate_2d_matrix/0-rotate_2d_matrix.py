#!/usr/bin/python3
"""
Take in a 2D matrix and rotate it 90 degrees
"""


def rotate_2d_matrix(matrix):
    rows = len(matrix)
    colm = len(matrix[0])
    for i in range(rows):
        for j in range(i, colm):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    for i in range(rows):
        matrix[i].reverse()
