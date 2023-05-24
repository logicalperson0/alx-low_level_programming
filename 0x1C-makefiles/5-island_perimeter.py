#!/usr/bin/python3
"""This is a module for the island func
"""


def island_perimeter(grid):
    """This is a function that returns perimeter
    of the island:
    traverse the grid to find a 1
    and then check all four directions
    """
    peri = 0
    xrows = grid

    if grid != []:
        ycols = grid[0]

    for x in range(len(xrows)):
        for y in range(len(ycols)):
            if grid[x][y] == 1:
                if y == 0 or grid[x][y - 1] == 0:  # check the left
                    peri += 1

                if x == 0 or grid[x - 1][y] == 0:  # check the top
                    peri += 1

                if y == len(ycols) or grid[x][y + 1] == 0:  # check the right
                    peri += 1

                if x == len(xrows) or grid[x + 1][y] == 0:  # check the bottom
                    peri += 1

    return peri
