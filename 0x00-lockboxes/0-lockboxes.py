#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""
Method that determines if all the boxes can be opened.
"""


def canUnlockAll(boxes):
    """
    Method that determines if all the boxes can be opened.
    """
    if (len(boxes) == 0):
        return False
    box = list(range(len(boxes)))
    key = [False]*len(boxes)
    keys = [0]
    key[0] = True

    for i in keys:
        for j in boxes[i]:
            if j in box:
                if j not in keys:
                    keys.append(j)
                    key[j] = True

    if False in key:
        return False
    return True


if __name__ == "__main__":
    canUnlockAll()
