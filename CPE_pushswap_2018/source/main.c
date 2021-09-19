/*
** EPITECH PROJECT, 2018
** project
** File description:
** project
*/

#include	"my.h"

t_list          *put_list(t_list *list, int number)
{
    t_list        *element = malloc(sizeof(t_list));
    t_list        *vlera;

    element->number = number;
    element->next = NULL;
    if (list == NULL)
        return (element);
    vlera = list;
    for (; vlera->next != NULL;)
        vlera = vlera->next;
    vlera->next = element;
    return (list);
}

void	help_main(char **av, int ac)
{
    t_list	*list_a = NULL;
    t_list	*list_b = NULL;
    int number;
    int i = 0;

    for (; av[++i] != NULL;) {
        number = my_getnbr(av[i]);
        list_a = put_list(list_a, number);
    }
    check_list(&list_a, &list_b, ac);
}

int	main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    help_main(av, ac);
    return (0);
}
