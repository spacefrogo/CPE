/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#include "solver.h"

static bool blocked(char **m, int x, int y)
{
    return (x < 0 || y < 0 || \
            m[y][x] == 'X' || m[y][x] == 'o' || m[y][x] == '.');
}

int solve(map_t *map, pos_t cur, pos_t goal)
{
    if ((cur.x > goal.x || cur.y > goal.y) || blocked(map->fix, cur.x, cur.y))
        return false;
    map->fix[cur.y][cur.x] = 'o';
    if (cur.x == goal.x && cur.y == goal.y)
        return true;
    if (solve(map, east(cur), goal) \
        || solve(map, south(cur), goal) \
        || solve(map, west(cur), goal) \
        || solve(map, north(cur), goal))
        return true;
    map->fix[cur.y][cur.x] = '.';
    return false;
}
