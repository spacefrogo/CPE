/*
** EPITECH PROJECT, 2018
** project
** File description:
** project
*/

#include "my.h"

void    help_pa(t_list **list_a, t_list **list_b, int number)
{
    number = (*list_b)->number;
    *list_a = add_list(*list_a, number);
    *list_b = (*list_b)->next;
    my_putstr("pa ");
}

void    help_pb(t_list **list_a, t_list **list_b, int number)
{
    number = (*list_a)->number;
    *list_b = add_list(*list_b, number);
    *list_a = (*list_a)->next;
    my_putstr("pb ");
}

void	help_sa(t_list **list_a, t_list *vlera)
{
    vlera = vlera->next;
    (*list_a)->next = vlera->next;
    vlera->next = *list_a;
    *list_a = vlera;
    my_putstr("sa ");
}
