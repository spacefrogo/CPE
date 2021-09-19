/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** something small
*/

#include "solver.h"

int main(int c, char **v)
{
    pos_t cur = {0, 0};
    pos_t goal;
    map_t map = {0, 0, 0};

    if (c != 2)
        errb("Invalid argument number.\n");
    get_map(v[1], &map);
    goal.x = map.x - 1;
    goal.y = map.y - 1;
    solve(&map, cur, goal);
    clean_map(map.fix, map.x, map.y);
    for (int i = 0; i < map.y; i++)
        my_printf(i < map.y - 1 ? "%s\n" : "%s", map.fix[i]);
    for (int i = 0; i < map.y;  i++)free(map.fix[i]);
    free(map.fix);
    return 0;
}
