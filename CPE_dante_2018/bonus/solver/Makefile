##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## standard makefile
##

NAME=solver
CFLAGS+= -Werror -Wall -I../include -L../lib/my -lmy
DFLAGS+= -Wall -I../include -L../lib/my -lmy -g
# DFLAGS+= -fsanitize=address
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) ../include/solver.h ../include/my.h
	@$(MAKE) -C ../lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug: $(SRC)
	@$(MAKE) -C ../lib/my debug
	clang -o $(NAME) $(SRC) $(DFLAGS)

clean:
	@rm -f $(OBJ) $(shell find . -name '*.gc*' -o -name 'vgcore.*')
	@$(MAKE) -C ../lib/my clean

fclean: clean
	@rm -f $(NAME) unit_tests
	@$(MAKE) -C ../lib/my fclean

include/my.h: lib/my/my.h
	cp -f $< $@

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all debug clean fclean re
