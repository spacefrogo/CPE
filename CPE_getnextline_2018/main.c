/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** project
*/

#include "get_next_line.h"




int	main(int ac, char **av)
{
    const int fd = open(av[1], O_RDONLY);

    char *s = get_next_line(fd);

    while (s) {
        my_putstr(s);
        my_putstr("\n");
        free(s);
        s = get_next_line(fd);
    }
    return (0);
}
