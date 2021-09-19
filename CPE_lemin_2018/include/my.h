/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** header file
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void    check_room_m(char *room1, char *room2);
void    multiple_rooms(char **room);
void	check_nbr_ant(char **map);
void    my_putchar(char c);
int     my_putnbr(int nb);
int     my_strlen(char *str);
int     my_putstr(char *str);
int     my_strncmp(char *input, char *str);
char    *my_strdup(char *str);
int     my_strcmp(char *env, char *word);
char    **new_map(char **map, char *line);
char    **remove_comment(char **map);
int     is_ant(char *str);
int     is_end(char *str);
int     is_start(char *str);
int     is_tunnel(char *str);
int     is_room(char *str);
void    print_map(char **map);
char    *clear_line(char *line);
char    *new_room(char *line);
char    **get_tunnel(char *line, char **tunnel);
void    is_tunnel_room(char **room, char *tunnel);
void    check_tunnel_room(char **room, char **tunnel);
void    check_tunnel(char **map, char **room);
void    room_map(char **map);
void    check_order(char **map);
void    room_tunnel_nbr(char **map);
void    clear_map(char **map);
void    check_error(char **map);

#endif /* _MY_H_ */
