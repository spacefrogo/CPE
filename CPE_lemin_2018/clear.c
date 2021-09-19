/*
** EPITECH PROJECT, 2019
** clear
** File description:
** lem-in
*/

#include "./include/my.h"

char    *clear_line(char *line)
{
    int i = 0;

    while (line[i]) {
        if (line[i] == '#' && line[i + 1] != '#' && line[i - 1] == ' ')
            line[i - 1] = 0;
        i++;
    }
    return (line);
}

char    **remove_comment(char **map)
{
    int i = 0;
    int j = 0;
    char **copy = NULL;

    copy = malloc(sizeof(char *) * 1);
    copy[0] = 0;
    while (map[i]) {
        if (map[i][0] == '#' && map[i][1] != '#') {
            i++;
        }
        copy = new_map(copy, map[i]);
        i++;
    }
    for (i = 0; map[i]; i++) {
        free(map[i]);
    }
    free(map);
    return (copy);
}

void	check_nbr_ant(char **map)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (map[i]) {
        if (is_ant(map[i]) == 0)
            j++;
        if (is_start(map[i]) == 0)
            k++;
        if (is_end(map[i]) == 0)
            l++;
        i++;
    }
    if ((j != 1) || (k != 1) || (l != 1))
        _exit(84);
}

void    clear_map(char **map)
{
    int i = 0;
    int j = 0;

    while (map[i]) {
        map[i] = clear_line(map[i]);
        i++;
    }
    room_tunnel_nbr(map);
    check_nbr_ant(map);
    check_order(map);
}
