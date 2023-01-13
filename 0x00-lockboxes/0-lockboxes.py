#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""

"""
boxes = [ [10, 3, 8, 9, 6, 5, 8, 1], [8, 5, 3, 7, 1, 8, 6], [5, 1, 9, 1], [], [6, 6, 9, 4, 3, 2, 3, 8, 5], [9, 4], [4, 2, 5, 1, 1, 6, 4, 5, 6], [9, 5, 8, 8], [6, 2, 8, 6] ]

def canUnlockAll():
    # TODO: Choose algorythm

    print(boxes)
    i = 1

    for innerList in boxes:
        boxLable = i
        print(boxLable, sorted(innerList))
        i += 1
        





if __name__ == "__main__":
    canUnlockAll()
