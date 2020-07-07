#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    les1_1 = 0
    nb_1 = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                nb_1 += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    les1_1 += 2
                if (i > 0 and grid[i - 1][j] == 1):
                    les1_1 += 2
    perimetre = nb_1 - les1_1
    return perimetre
