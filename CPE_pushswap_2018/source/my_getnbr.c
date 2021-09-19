/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

#include "my.h"

int	my_getnbr(char *str)
{
    int i = 0;
    int j = 1;
    int number = 0;

    if (!str)
        return (0);
    while (str[i] != '\0') {
        if(str[i] == '-') {
            j = -1 * j;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            number = (number * 10) + (str[i] - 48);
        } else
            return number * j;
        i++;
    }
    return number * j;
}
