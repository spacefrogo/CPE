/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#include "generator.h"

static void fill_corners(unsigned char ** cell, int h, int w)
{
    for (int i = 0; i <= 2 * w; i++) {
        cell[0][i] &= ~NORTH;
        cell[2 * h][i] &= ~SOUTH;
    }
    for (int i = 0; i <= 2 * h; i++) {
        cell[i][0] &= ~WEST;
        cell[i][2 * w] &= ~EAST;
    }
}

static void fill_borders(unsigned char **cell, int h, int w)
{
    for (int i = -1, w2 = 2 * w + 2; i <= 2 * h + 1; i++) {
        cell[i][-1] = VISITED;
        cell[i][w2 - 1] = VISITED;
    }
    for (int i = 0, h2 = 2 * h + 2; i <= 2 * w; i++) {
        cell[-1][i] = VISITED;
        cell[h2 - 1][i] = VISITED;
    }
    for (int i = 0; i <= h; i++)
        for (int j = 0; j <= 2 * w; j++)
            cell[2 * i][j] |= EAST | WEST;
    for (int i = 0; i <= 2 * h; i++)
        for (int j = 0; j <= w; j++)
            cell[i][2 * j] |= NORTH | SOUTH;
    fill_corners(cell, h, w);
}

static unsigned char **set_map(int h2, int w2)
{
    unsigned char **p = gib(sizeof(*p) * (h2 + 2) + w2 * h2 + 1);

    p[1] = (unsigned char *)(p + h2 + 2) + 1;
    for (int i = 2; i <= h2; i++)
        p[i] = p[i - 1] + w2;
    p[0] = p[h2];
    return p;
}

void generate(int row, int col)
{
    unsigned char **p = set_map(2 * row + 2, 2 * col + 2);
    unsigned char **cell = &p[1];

    fill_borders(cell, row, col);
    walk(cell, irand(col) * 2 + 1, irand(row) * 2 + 1, col * row);
    for (int i = 0; i <= 2 * row; i++)
        for (int j = 0; j <= 2 * col; j++)
            cell[i][j] &= ~VISITED;
    show(cell, row, col);
    free(p);
}
