/*
** EPITECH PROJECT, 2019
** my_put
** File description:
** lem-in
*/

#include "./include/my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int     my_putnbr(int nb)
{
    int i = 1;
    int nbr = nb;
    int j = 0;
    if (nb < 0) {
        my_putchar('-');
        my_putchar(my_putnbr(-nb));
    }
    while (nb > 9) {
        nb = nb / 10;
        i = i * 10;
    }
    while (i > 0) {
        j = (nbr / i) % 10;
        my_putchar(j + '0');
        i = i / 10;
    }
    return 0;
}

int     my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
