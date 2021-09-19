/*
** EPITECH PROJECT, 2018
** project
** File description:
** pushswap
*/

#include "my.h"

void	swap(t_list **list_a, t_list **list_b)
{
    t_list      *vlera;
    int         i = 1;

    help_swap(i, list_a, list_b, vlera);
}

void	help_swap(int i, t_list **list_a, t_list **list_b, t_list *vlera)
{
    while (i == 1) {
        i = 0;
        vlera = *list_a;
        for (; (*list_a)->next != NULL;) {
            check_things(list_a, list_b, i, vlera);
        }
        for (; (*list_b != NULL);)
            push_list_a(list_a, list_b);
    }
}

void	check_list(t_list **list_a, t_list **list_b, int argc)
{
    t_list      *vlera = *list_a;
    int         sorted = argc - 2;
    int         i = 0;

    while (vlera->next != NULL && vlera->number < vlera->next->number) {
        i++;
        vlera = vlera->next;
    }
    check_third(i, sorted, list_a, list_b);
}

void	check_third(int i, int sorted, t_list **list_a, t_list **list_b)
{
    if (i == sorted)
        my_putchar('\n');
    else
        swap(list_a, list_b);
}

void	check_things(t_list **list_a, t_list **list_b, int i, t_list *vlera)
{
    if ((*list_a)->number > (*list_a)->next->number) {
        swap_list_a(list_a);
        i = 1;
    }
    push_list_b(list_a, list_b);
    vlera = vlera->next;
}
