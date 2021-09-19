/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** Project 2019
*/

#include "get_next_line.h"

static size_t	my_strlen(char *str)
{
    size_t i = 0;

    while (str[i])
        i++;
    return (i);
}

static	char	*my_realloc(char *str)
{
    char *fjala;
    size_t i;
    size_t s = my_strlen(str);
    size_t length = s + 2;

    if ((fjala = malloc(sizeof(char) * length)) == NULL)
        return (NULL);
    do_this(str, fjala, i);
    return fjala;
}

void	do_this(char *str, char *fjala, size_t i)
{
    for (i = 0; str[i] != '\0'; i++)
        fjala[i] = str[i];
    fjala[i + 1] = '\0';
    free(str);
}

static	char	do_buff(int fd)
{
    char a;
    static char read1[READ_SIZE];
    static char* swaped;
    static int valuta = 0;

    if (valuta == 0) {
        valuta = read(fd, read1, READ_SIZE);
        int d = my_strlen(read1);
        if (d == 0 || valuta == 0)
            return ('\0');
        swaped = read1;
    }
    a = *swaped;
    swaped += 1;
    valuta -= 1;
    return (a);
}

static	char	*help_function(char character, int k, char *string)
{
    string[k] = '\0';
    if (!(character)) {
        int y = my_strlen(string);
        if (string && y > 1)
            return (string);
        free(string);
        return (NULL);
    }
    return (string);
}

char	*get_next_line(int fd)
{
    int i;
    char buff;
    char* line = malloc(sizeof(char) * 2);

    if (fd < 0)
        return NULL;
    if (line == NULL)
        return NULL;
    report_if_null(line);
    buff = do_buff(fd);
    for (i = 0; buff && buff != '\n'; i++) {
        line[i] = buff;
        line = my_realloc(line);
        buff = do_buff(fd);
    }
    return help_function(buff, i, line);
    free(line);
}

char	*report_if_null(char *line)
{
    if (line == NULL)
        return NULL;
    line[1] = '\0';
}
