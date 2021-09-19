/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** something small
*/

#include "my.h"

char *my_strtok(char *p, bool (*keyv)(char))
{
    static char *sp = 0;
    size_t i = 0;
    char *ret = 0;

    if (p) {
        sp = p;
    } else if (!sp || !*sp)
        return 0;
    for (; *sp && keyv(*sp); sp++);
    for (; sp[i] && !keyv(sp[i]); i++);
    ret = my_strndup(sp, i);
    sp += i;
    return ret;

}

char *my_strsep(char **p, bool (*keyv)(char))
{
    char *pc = *p;
    size_t n = 0;

    if (!p || !*p)
        return 0;
    while (*pc) {
        while (keyv(*pc))
            pc++;
        while (!keyv(pc[n]))
            n++;
    }
    return my_strndup(pc, n);
}
