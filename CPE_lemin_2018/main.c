/*
** EPITECH PROJECT, 2019
** lem_in
** File description:
** main
*/

#include "./include/my.h"

int	main(int ac, char **av)
{
    char **map = NULL;
    int i = 0;
    size_t len = 0;
    char *line = NULL;

    if (ac != 1)
        return (84);
    map = malloc(sizeof(char *) * 1);
    map[0] = 0;
    while (getline(&line, &len, stdin) != -1) {
        if ((line[my_strlen(line) - 1]) == '\n')
            line[my_strlen(line) - 1] = 0;
        map = new_map(map, line);
    }
    map = remove_comment(map);
    check_error(map);
    for (int j = 0; map[j]; free(map[j]), j++);
    free(map);
    free(line);
    return (0);
}
