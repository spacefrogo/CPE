/*
** EPITECH PROJECT, 2018
** project
** File description:
** project
*/

#include	"my.h"

t_list	*add_list(t_list *list, int number)
{
    t_list	*vlera = malloc(sizeof(t_list));

    vlera->number = number;
    vlera->next = list;
    list = vlera;
    return list;
}

void	push_list_a(t_list **list_a, t_list **list_b)
{
    int	number;

    if (*list_b == NULL)
        return;
    help_pa(list_a, list_b, number);
}

void	push_list_b(t_list **list_a, t_list **list_b)
{
    int	number;

    if (*list_a == NULL)
        return;
    help_pb(list_a, list_b, number);
}

void		swap_list_a(t_list **list_a)
{
    t_list	*vlera = *list_a;

    help_sa(list_a, vlera); 
}
