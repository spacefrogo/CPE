/*
** EPITECH PROJECT, 2018
** algorithn
** File description:
** project
*/

#include "my.h"

char	**get_array(char *filepath);
char	*open_file(char *filepath);

char	**replace(char *filepath)
{
    char **array = get_array(filepath);
    int i = 0;
    int j;

    while (array[i] != NULL) {
        for(j = 0; array[i][j] != '\0'; j++) {
            if (array[i][j] == '.')
                array[i][j] = 'x';
        }
        i++;
    }
    return (array);
}
