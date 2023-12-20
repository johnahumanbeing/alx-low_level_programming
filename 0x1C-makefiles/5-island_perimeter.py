#!/usr/bin/python3
"""
This module runs with the island_perimeter function
"""

def water_amt_isl(grid, hor, ver):
    """
    returns amount of water around a cell
    """
    amt = 0

    if hor <= 0 or not grid[hor - 1][ver]:
        amt += 1
    if hor >= len(grid) - 1 or not grid[hor + 1][ver]:
        amt += 1
    if ver <= 0 or not grid[hor][ver - 1]:
        amt += 1
    if ver >= len(grid[hor]) - 1 or not grid[hor][ver + 1]:
        amt += 1

    return amt

def island_perimeter(grid):
    """
    returns the perimeter of the island as per the grid
    """

    perimeter = 0

    for hor in range(len(grid)):
        for ver in range(len(grid[hor])):
            if grid[hor][ver]:
                perimeter += water_amt_isl(grid, hor, ver)

    return perimeter