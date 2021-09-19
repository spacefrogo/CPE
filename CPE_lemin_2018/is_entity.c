/*
** EPITECH PROJECT, 2019
** is_...
** File description:
** lem-in
*/

#include "./include/my.h"

int     is_tunnel(char *str)
{
    unsigned int i = 0;

    for (i = 0; str[i] != '\0' && str[i] != '-'; i++);
    if (str[i] != '-')
        return (84);
    i++;
    for (i = 0; str[i] != '\0' && str[i] != ' '; i++);
    if (str[i] == '\0' || (str[i] == ' ' && str[i + 1] == '#' && \
        str[i + 2] != '#'))
        return (0);
    return (84);
}

int     is_room(char *str)
{
    unsigned int i = 0;

    for (; str[i] != ' ' && str[i] != '\0'; i++);
    if (str[i] != ' ')
        return (84);
    i++;
    for (; str[i] != ' ' && str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (84);
    if (str[i] != ' ')
        return (84);
    i++;
    for (; str[i] != ' ' && str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (84);
    if (str[i] == '\0' || (str[i] == ' ' && str[i + 1] == '#' && \
        str[i + 2] != '#'))
        return (0);
    return (84);
}

int     is_ant(char *str)
{
    int i = 0;

    while (str[i] != ' ' && str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (84);
        i++;
    }
    if (str[i] == '\0' || (str[i] == ' ' && str[i + 1] == '#' && \
        str[i + 2] != '#'))
        return (0);
    else
        return (84);
}

int     is_end(char *str)
{
    if (my_strncmp("##end", str) == 1) {
        if (my_strlen(str) == 5 || (str[5] == ' ' && str[6] == '#' && \
            str[7] != '#'))
            return (0);
        return (84);
    }
    else
        return (84);
}

int     is_start(char *str)
{
    if (my_strncmp("##start", str) == 1) {
        if (my_strlen(str) == 7 || (str[7] == ' ' && str[8] == '#' && \
            str[9] != '#'))
            return (0);
        return (84);
    }
    else
        return (84);
}
