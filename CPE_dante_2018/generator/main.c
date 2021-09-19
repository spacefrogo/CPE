/*
** EPITECH PROJECT, 2019
** EPITECH
** File description:
** 2019
*/

#include <time.h>
#include "generator.h"

int main(int ac, char *av[])
{
    bool perfect = false;
    int cols;
    int rows;

    if (ac != 3 && ac != 4)
        errb("Invalid number of arguments\n");
    if (ac == 4 && !my_strcmp(av[3], "perfect"))
        perfect = true;
    else if (ac == 4)
        errb("Last argument useless\n");
    cols = atoi(av[1]);
    rows = atoi(av[2]);
    if (cols <= 0 || rows <= 0)
        errb("invalid column or row number\n");
    srand(time(0));
    (void)perfect;
    generate(rows > 1 ? rows / 2 + 1 : 1, cols > 1 ? cols / 2 + 1 : 1);
    return 0;
}
