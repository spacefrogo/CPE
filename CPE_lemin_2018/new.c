/*
** EPITECH PROJECT, 2019
** new
** File description:
** lem-in
*/

#include "./include/my.h"

char    *new_room(char *line)
{
    char *copy = NULL;
    int i = 0;

    copy = my_strdup(line);
    while (copy[i]) {
        if (copy[i] == ' ') {
            copy[i] = 0;
            return (copy);
        }
        i++;
    }
}

char    **new_map(char **map, char *line)
{
    char **map1 = NULL;
    int i = 0;

    while (map[i] != 0)
        i++;
    map1 = malloc(sizeof(char *) * (i + 2));
    i = 0;
    while (map[i]) {
        map1[i] = (map[i]);
        i++;
    }
    if (i > 1 && (my_strcmp(map[i - 1], line) == 1) && \
        ((is_room(line) == 0) || (is_tunnel(line) == 0))) {
        _exit(84);
    }
    map1[i] = my_strdup(line);
    map1[i + 1] = 0;
    return (map1);
}
