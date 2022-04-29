#!/usr/bin/python3
"""
Find the fewet number of coins needed to make change for a given amount.
"""


def makeChange(coins, total):
    """
    Find the fewest number of coins needed to make change for a given amount.
    """
    Loose_Change = []
    Listed_Change = []
    if total <= 0:
        return 0
    else:
        while total != 0:
            if len(coins) == 0:
                return -1
            if total % max(coins) == 0:
                Loose_Change.append((max(coins), total//max(coins)))
                total = 0
            elif max(coins) < total:
                Loose_Change.append((max(coins), total//max(coins)))
                total = total % max(coins)
                coins.remove(max(coins))
            else:
                coins.remove(max(coins))
    for item in Loose_Change:
        Listed_Change.append(item[1])
    Loose_Change = sum(Listed_Change)
    return Loose_Change
