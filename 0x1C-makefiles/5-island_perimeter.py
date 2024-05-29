#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented in a grid.

    The grid contains water represented by 0 and land represented by 1.

    Args:
        grid: A grid where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island defined in the grid.
    """

    height = len(grid)
    width = len(grid[0])

    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1

                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1

                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
    return size * 4 - edges * 2
