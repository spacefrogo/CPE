/*
** EPITECH PROJECT, 2018
** header
** File description:
** bre
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <fcntl.h>
#include <string.h>

typedef struct s_list
{
    int number;
    struct	s_list	*next;
} t_list;

void    help_main(char **, int);
void    help_swap(int, t_list **, t_list **, t_list *);
t_list	*add_list(t_list *, int);
void    help_sa(t_list **, t_list *);
void    help_pb(t_list **, t_list **, int);
void    help_pa(t_list **, t_list **, int);
void    check_third(int, int, t_list **, t_list **);
t_list	*put_list(t_list *, int);
void    check_list(t_list **, t_list **, int);
void    swap(t_list **, t_list **);
void    check_second(t_list *, int);
void    check_things(t_list **, t_list **, int, t_list *);
int     my_getnbr(char *);
int     fs_open_file(char const *);
void 	my_putchar(char);
int     my_strlen(char *);
int	my_put_nbr_base(int, char *);
int	my_putstr(char *);
int     count_chars(char const *);
char	**string_to_word_array(char const *);
void	my_show_word_array(char **);
void    swap_list_a(t_list **);
void    push_list_a(t_list **, t_list **);
void    push_list_b(t_list **, t_list **);

#endif // _MY_H_
