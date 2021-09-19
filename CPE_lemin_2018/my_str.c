/*
** EPITECH PROJECT, 2019
** my_str
** File description:
** lem-in
*/

#include "./include/my.h"

int     my_strlen(char *str)
{
    int j = 0;

    while (str && str[j]) {
        j = j + 1;
    }
    return (j);
}

int     my_strncmp(char *input, char *str)
{
    int i = 0;
    int j = my_strlen(input);

    while (i < j) {
        if (str[i] != input[i])
            return (0);
        i++;
    }
    return (1);
}

char    *my_strdup(char *str)
{
    char *dest = NULL;
    size_t i = 0;
    int len = 0;

    len = my_strlen(str);
    if (!str || !len)
        return 0;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return 0;
    while (str[i]) {
        dest[i] = str[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int     my_strcmp(char *env, char *word)
{
    int i = my_strlen(env);
    int j = my_strlen(word);

    if (i != j)
        return (0);
    i = 0;
    while (i < j) {
        if (env[i] != word[i])
            return (0);
        i++;
    }
    return (1);
}
