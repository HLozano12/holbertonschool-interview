#!/usr/bin/python3
"""
Figure out how wins the prime aber game.
"""


def isWinner(x, nums):
    """
    Ready set go.
    Player 1 is P1 and Player 2 is P2
    Project gave us the names Maria and Ben.
    """

    P1 = 0
    P2 = 0

    if x is None or nums is None or x == 0 or nums == 0:
            return None

    for i in range(x):
            Prime = Check_Prime(nums[i])
            if len(Prime) % 2 != 0:
                    P1 += 1
            else:
                P2 += 1
    if P1 > P2:
        return "Maria"
    elif P2 > P1:
        return "Ben"
    else:
        return None


def Check_Prime(a):
    """""
    Checking if the list is prime or not.
    """
    Prime = []
    sift = [True] * (a + 1)
    for i in range(2, a + 1):
                if sift[i]:
                        Prime.append(i)
                        for b in range(i * i, a + 1, i):
                                sift[b] = False
    return Prime
