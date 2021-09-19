/*
** EPITECH PROJECT, 2018
** muhlib
** File description:
** change string to word array
*/

#include <stdlib.h>
#include "my.h"

static size_t count_words(char const *str, bool (*keyv)(char))
{
    size_t words = 0;

    for (size_t i = 0; str && str[i]; i++)
        words += !!keyv(str[i]);
    return words;
}

char **str_to_tab(char * const str, bool (*keyv)(char))
{
    char **arr = 0;
    size_t i = 0;

    if (!str || !*str)
        return 0;
    arr = gib(sizeof(*arr) * (count_words(str, keyv) + 2));
    for (char const *sc = str; *sc; i++) {
        for (; *sc && keyv(*sc); sc++);
        arr[i] = my_strsep((char **)&sc, keyv);
    }
    return arr;
}

int show_tab(char const **tab, char const *sep)
{
    int res = 0;

    if (!sep)
        sep = "\n";
    for (uint_t i = 0; tab && tab[i]; i++) {
        res += my_putstr(tab[i]);
        res += my_putstr(sep);
    }
    return res;
}

void free_array(char **m)
{
    size_t i = 0;

    if (!m)
        return;
    if (*m) {
        for (; m[i]; i++)
            free(m[i]);
        free(m[i]);
    }
    free(m);
}
