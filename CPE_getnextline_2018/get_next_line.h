/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** Project 2019 Back to the future
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef READ_SIZE
#define READ_SIZE 42
#endif /* !READ_SIZE */

char	 *report_if_null(char *);
void	do_that(int, char, char *, int);
void	do_this(char *, char *, size_t);
void	my_putstr(char *);
char	*get_next_line(int);

#endif /* !GET_NEXT_LINE_H */
