/*
** EPITECH PROJECT, 2019
** multiple rooms
** File description:
** lemin
*/

#include "./include/my.h"

void	check_room_m(char *room1, char *room2)
{
    if (my_strcmp(room1, room2) == 1)
        _exit(84);
}

void    multiple_rooms(char **room)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (room[i])
        i++;
    for (j = 0; j < i - 1; j++)
        for (k = j + 1;k < i; k++)
            check_room_m(room[k], room[j]);
}
