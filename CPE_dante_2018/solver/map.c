/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** something small
*/

#include "solver.h"

static int get_width(char **m, int y)
{
    int wid = 0;

    for (; m && m[0] && m[0][wid]; wid++);
    for (int i = 0, tmpwid = 0; m && i < y; i++, tmpwid = 0) {
        for (; m[i] && m[i][tmpwid]; tmpwid++)
            if (m[i][tmpwid] != 'X' && m[i][tmpwid] != '*')
                errb("Error: invalid characters.\n");
        if (wid != tmpwid || wid == 0)
            errb("Error: non-rectangular map.\n");
    }
    return wid;
}

map_t *get_map(char *p, map_t *map)
{
    char tmpin[100001] = {0};
    FILE *fd = fopen(p, "r");
    ssize_t cur = 10;

    if (!fd)
        errb("Problem opening file.\n");
    map->fix = gib(sizeof(*map->fix) * (cur + 1));
    while (fgets(tmpin, sizeof(tmpin), fd)) {
        tmpin[strcspn(tmpin, "\n")] = 0;
        map->fix[map->y++] = my_strdup(tmpin);
        if (map->y == cur) {
            cur *= 2;
            map->fix = realloc(map->fix, sizeof(*map->fix) * cur);
        }
    }
    fclose(fd);
    if (map->y == 0)
        errb("Invalid file (empty?)\n");
    map->x = get_width(map->fix, map->y);
    return map;
}

void clean_map(char **m, int x, int y)
{
    if (m[0][0] != 'o' || m[y - 1][x - 1] != 'o') {
        my_putstr("no solution found");
        for (int i = 0; i < y; free(m[i]), i++);
        free(m);
        _exit(0);
    }
    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
            m[i][j] = (m[i][j] == '.') ? '*' : m[i][j];
}
