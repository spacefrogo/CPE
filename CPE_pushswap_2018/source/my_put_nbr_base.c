/*
** EPITECH PROJECT, 2018
** project
** File description:
** put_number_base
*/

#include "my.h"

int	my_put_nbr_base(int number, char *base)
{
    int	x = my_strlen(base);

    if (number < INT_MIN + x || number > INT_MAX - x)
        return 0;
    if (number < 0)
        number = number * (-1);
    if (number > x - 1) {
        my_put_nbr_base(number / x, base);
        my_put_nbr_base(number % x, base);
    }
    if (number >= 0 && number <= x - 1)
        my_putchar(base[number]);
    return 0;
}
