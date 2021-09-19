/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#ifndef GENERATOR_H
    #define GENERATOR_H

    #include "my.h"

enum DIRECTION {
    NORTH = 1 << 0U,
    SOUTH = 1 << 1U,
    WEST = 1 << 2U,
    EAST = 1 << 3U,
    VISITED = 1 << 4U,
};

// would highlight solution path but that's blocked
void show(unsigned char **, int, int);
int irand(int);

void walk(unsigned char **, int, int, int);
void generate(int, int);
void do_generate(int, int, bool);

#endif
