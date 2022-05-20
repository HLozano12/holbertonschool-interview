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

    P1 = 0
    P2 = 0

    if x is None or nums is None or x == 0 or nums == 0:
            return None

    for i in range(x):
            P_Num = isPrime(nums[i])
            if len(P_Num) % 2 == 0:
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
    P_Num = []
    Sift = [True] * (a + 1)
    for i in range(2, a + 1):
        if Sift[i]:
            P_Num.append(i)
            for j in range(i * i, a + 1, i):
                Sift[j] = False
    return P_Num
