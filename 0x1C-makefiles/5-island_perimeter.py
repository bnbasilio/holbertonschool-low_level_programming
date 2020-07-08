#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ computes the island's perimeter """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                if i is 0 or i == len(grid) - 1:
                    p += 1
                if j is 0 or j == len(grid[i]) - 1:
                    p += 1
                if j is not 0:
                    if grid[i][j - 1] is 0:
                        p += 1
                if i is not 0:
                    if grid[i - 1][j] is 0:
                        p += 1
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] is 0:
                        p += 1
                if i != len(grid) - 1:
                    if grid[i + 1][j] is 0:
                        p += 1

    return p
