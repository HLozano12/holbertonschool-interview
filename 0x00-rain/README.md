# Interview Questions Task
  
  We are to attempt to solve a popular interview question.

## Purpose of task

Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.

## Prototype

 def rain(walls)

 walls is a list of non-negative intergers.

## Input given

Assume that the ends of the list (before index 0 and after index walls[-1]) are not walls, meaning they will not retain water. If the list is empty we are to return 0.

0_main.py

**Input:**

#!/usr/bin/python3

"""
0_main
"""
rain = **import**('0-rain').rain

if **name** == "**main**":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))
