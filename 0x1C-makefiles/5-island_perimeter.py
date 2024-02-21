#!/usr/bin/python3
"""
This module contains a function.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island.

    Args:
    grid: nested list

    Return:
    perimeter.
    """
    i = len(grid)
    j = len(grid[0])
    perim = 0
    for x in range(i):
        for y in range(j):
            if grid[x][y] == 1:
                perim += 4
                if y > 0 and grid[x][y - 1] == 1:
                    perim -= 2
                if x > 0 and grid[x - 1][y] == 1:
                    perim -= 2
    return perim
