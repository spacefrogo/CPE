/*
** EPITECH PROJECT, 2018
** project
** File description:
** project
*/

#include "my.h"

int	my_putstr(char *str)
{
    unsigned long long int i = 0;

    if (!str || !*str)
        return 0;
    for (; str[i]; i++)
        my_putchar(str[i]);
    return i;
}
