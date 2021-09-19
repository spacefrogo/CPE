/*
** EPITECH PROJECT, 2019
** lem_in
** File description:
** lem-in
*/

#include "./include/my.h"

void    print_map(char **map)
{
    int i = 1;
    int j = 0;

    my_putstr("#number_of_ants\n");
    my_putstr(map[0]);
    my_putstr("\n#rooms\n");
    while (map[i] != 0 && (is_tunnel(map[i]) != 0)) {
        my_putstr(map[i]);
        my_putchar('\n');
        i++;
    }
    my_putstr("#tunnels\n");
    while (map[i] && (is_tunnel(map[i]) == 0)) {
        my_putstr(map[i]);
        my_putchar('\n');
        i++;
    }
}

void    check_order(char **map)
{
    int i = 1;
    int j = 0;

    while (map[j])
        j++;
    if (is_ant(map[0]) != 0)
        _exit(84);
    while (map[i] && (is_tunnel(map[i]) != 0)) {
        if ((is_start(map[i]) == 0) && (is_room(map[i + 1]) != 0))
            _exit(84);
        if ((is_end(map[i]) == 0) && (is_room(map[i + 1]) != 0))
            _exit(84);
        i++;
    }
    while (map[i] && (is_tunnel(map[i]) == 0))
        i++;
    if (i != j)
        _exit(84);
    room_map(map);
}

void    room_tunnel_nbr(char **map)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (map[i]) {
        if (is_start(map[i]) == 0)
            j++;
        if (is_end(map[i]) == 0)
            k++;
        i++;
    }
    if (j != 1 || k != 1)
        _exit(84);
}

void    check_error(char **map)
{
    int i = 0;
    int j = 0;

    while (map[i]) {
        if (is_room(map[i]) == 0)
            j++;
        if (is_tunnel(map[i]) == 0)
            j++;
        if (is_ant(map[i]) == 0)
            j++;
        if (is_start(map[i]) == 0)
            j++;
        if (is_end(map[i]) == 0)
            j++;
        if (j != 1)
            _exit(84);
        j = 0;
        i++;
    }
    clear_map(map);
}
