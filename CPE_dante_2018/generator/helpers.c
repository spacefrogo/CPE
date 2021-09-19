/*
** EPITECH PROJECT, 2019
** EPITECH
** File description:
** 2019
*/

#include "generator.h"
#include "colors.h"

static const char glyph[] = "*XXXXXXXXXXXXXXX*************";

int irand(int n)
{
    int r;
    int rmax = n * (RAND_MAX / n);

    for (r = rand(); r >= rmax; r = rand());
    return r / (RAND_MAX / n);
}

void show(unsigned char **cell, int h, int w)
{
    for (int i = 1; i < h * 2; i++) {
        for (int j = 1; j < w * 2; j++) {
            printf("%lc", glyph[cell[i][j]]);
            fflush(stdout);
        }
        if (i < h * 2 - 1)
            putchar('\n');
    }
}
