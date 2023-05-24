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

                # check the left
                if y == 0 or grid[x][y - 1] == 0:
                    peri += 1

                # check the top
                if x == 0 or grid[x - 1][y] == 0:
                    peri += 1

                # check the right
                if y == len(ycols) - 1 or grid[x][y + 1] == 0:
                    peri += 1

                # check the bottom
                if x == len(xrows) - 1 or grid[x + 1][y] == 0:
                    peri += 1

    return peri
