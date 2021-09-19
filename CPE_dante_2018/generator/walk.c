/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#include "generator.h"

const int dirs[4][2] = {{-2, 0}, {0, 2}, {2, 0}, {0, -2}};

static void break_vert_walls(unsigned char **cell, int x, int y, int y1)
{
    int tmp = (y + y1) / 2;

    cell[tmp][x + 1] &= ~WEST;
    cell[tmp][x] &= ~(EAST | WEST);
    cell[tmp][x - 1] &= ~EAST;
}

static void break_horiz_walls(unsigned char **cell, int x, int y, int x1)
{
    int tmp = (x + x1) / 2;

    cell[y - 1][tmp] &= ~SOUTH;
    cell[y][tmp] &= ~(NORTH | SOUTH);
    cell[y + 1][tmp] &= ~NORTH;
}

void walk(unsigned char **cell, int x, int y, int avail)
{
    int d[4] = {0, 1, 2, 3};
    static int calls = 0;

    cell[y][x] |= VISITED;
    avail--;
    calls++;
    if (calls >= 250)
        return;
    for (int x1 = 3, y1 = irand(x1 + 1); x1; y1 = irand(x1 + 1), x1--)
        my_swap((x1 != y1) ? &d[x1] : 0, (x1 != y1) ? &d[y1] : 0);
    for (int i = 0, x1 = x + dirs[d[i]][0], y1 = y + dirs[d[i]][1]; avail && \
            i < 4; x1 = x + dirs[d[i]][0], y1 = y + dirs[d[i]][1], i++) {
        if (cell[y1][x1] & VISITED)
            continue;
        if (x1 == x)
            break_vert_walls(cell, x, y, y1);
        else if (y1 == y)
            break_horiz_walls(cell, x, y, x1);
        walk(cell, x1, y1, avail);
    }
}
