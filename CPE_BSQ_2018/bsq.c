/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** bsq
*/

#include "my.h"

char    **replace(char *filepath);

int     if_existing(char *str)
{
    int fd = 0;

    if ((fd = open(str, O_RDONLY)) == -1) {
        my_putstr("Sorry: ");
        my_putstr(str);
        my_putstr(": No such file or directory\n");
        return (84);
    }
    return fd;
}

int	length(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\n') {
        count++;
        i++;
    }
    return count;
}

char	*open_file(char *filepath)
{
    unsigned	int	fd = 0;
    struct stat st;
    char *buffer = NULL;
    unsigned	int	size = 0;
    char *buffer1;

    stat(filepath, &st);
    size = st.st_size + 1;
    buffer = malloc(size);
    buffer1 = malloc(size);
    if ((fd = if_existing(filepath)) != 84) {
        read(fd, buffer, size);
        for (int j = 0, i = length(buffer) + 1; buffer[i] != '\0'; i++, j++)
            buffer1[j] = buffer[i];
        return buffer1;
    }
    free(buffer);
    free(buffer1);
    close(fd);
    return NULL;
}

char	**get_array(char *filepath)
{
    char **array;
    char *str;

    str = open_file(filepath);
    array = string_to_word_array(str);
    return (array);
}

int	main(int ac, char **av)
{
    char **str = NULL;

    if (ac != 2)
        return 84;
    str = replace(av[1]);
    my_show_word_array(str);
    return (0);
}
