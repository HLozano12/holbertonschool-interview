#!/usr/bin/python3
"""
Figure out how wins the prime number game.
"""


def isWinner(x, nums):
    """
    Ready set go.
    Player 1 is P1 and Player 2 is P2
    Project gave us the names Maria and Ben.
    """

    P1 = "Maria"
    P2 = "Ben"
    games = 0

    if len(nums) == 0:
        return None
    if len(nums) == 1 and nums[0] == 1:
        return None
    for num in range(x):
        rds = num if num < len(nums) - 1 else len(nums) - 1
        if MultiSets(nums[num]) == 1:
            games += 1
        else:
            games += 1
    if games % 2 == 0:
        return P2
    elif games % 2 == 1:
        return P1
    else:
        return None


def MultiSets(y):
    num_prime = 0
    for i in range(y + 1):
        if Check_Prime(i):
            num_prime += 1
    return num_prime % 2


def Check_Prime(a):
    if a == 1:
        return False
    for i in range(2, a):
        if a % i == 0:
            return False
    return True
