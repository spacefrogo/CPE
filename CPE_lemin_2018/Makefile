##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	main.c		\
		clear.c		\
		my_str.c	\
		my_put.c	\
		check_tunnel.c	\
		new.c		\
		is_entity.c	\
		lem_in.c	\
		multiple_rooms.c

NAME	=	lem_in

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC) -I /include -g

clean:
		rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
