/*
** EPITECH PROJECT, 2019
** check_tunnel
** File description:
** lem-in
*/

#include "./include/my.h"

char    **get_tunnel(char *line, char **tunnel)
{
    int i = 0;
    int j = 0;
    char *copy = malloc(sizeof(char) * my_strlen(line));

    while (line[i] != '-') {
        copy[i] = line[i];
        i++;
    }
    copy[i] = 0;
    i++;
    tunnel = new_map(tunnel, copy);
    while (line[i])
        copy[j++] = line[i++];
    copy[j] = 0;
    tunnel = new_map(tunnel, copy);
    free(copy);
    return (tunnel);
}

void    is_tunnel_room(char **room, char *tunnel)
{
    int i = 0;
    int j = 0;

    while (room[i]) {
        if (my_strcmp(room[i], tunnel) == 1)
            j++;
        i++;
    }
    if (j == 0)
        _exit(84);
}

void    check_tunnel_room(char **room, char **tunnel)
{
    int i = 0;

    while (tunnel[i]) {
        is_tunnel_room(room, tunnel[i]);
        i++;
    }
}

void    check_tunnel(char **map, char **room)
{
    int i = 0;
    int j = 0;
    char **tunnel = NULL;

    tunnel = malloc(sizeof(char *) * 1);
    tunnel[0] = 0;
    while (map[i] && is_tunnel(map[i]) != 0)
        i++;
    while (map[i] && is_tunnel(map[i]) == 0) {
        tunnel = get_tunnel(map[i], tunnel);
        i++;
        j++;
    }
    if (j == 0)
        _exit(84);
    check_tunnel_room(room, tunnel);
    print_map(map);
    _exit(0);
}

void    room_map(char **map)
{
    int i = 0;
    char **room = NULL;
    char *line = NULL;

    room = malloc(sizeof(char *) * 1);
    room[0] = 0;
    while (map[i]) {
        if (is_room(map[i]) == 0) {
            line = new_room(map[i]);
            room = new_map(room, line);
        }
        i++;
    }
    multiple_rooms(room);
    check_tunnel(map, room);
}
