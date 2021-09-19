/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#ifndef SOLVER_H
#define SOLVER_H

#include <string.h>
#include "my.h"

typedef struct {
    int x;
    int y;
} pos_t;

typedef struct {
    int x;
    int y;
    char **fix;
} map_t;

// map with '*' (passage), 'X' (block) and '\n' (on all rows except last)
map_t *get_map(char *, map_t *);
void clean_map(char **, int, int);

// 'o' usable path; '.' passed but unusable
int solve(map_t *, pos_t, pos_t);

pos_t north(pos_t);
pos_t south(pos_t);
pos_t east(pos_t);
pos_t west(pos_t);

#endif
