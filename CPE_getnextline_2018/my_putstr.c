/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <stdio.h>
#include <string.h>

void	my_putstr(char *str)
{
    unsigned	int	k;

    k = 0;
    if (str != NULL){
        while(str[k] != '\0') {
            my_putchar(str[k++]);
        }
    }
}
