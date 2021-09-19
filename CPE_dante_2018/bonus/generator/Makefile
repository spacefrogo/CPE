##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## standard makefile
##

NAME=generator
CFLAGS+= -Werror -Wall -I../include -L../lib/my -lmy
DFLAGS+= -Wall -I../include -L../lib/my -lmy -g
# DFLAGS+= -fsanitize=address
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) ../include/generator.h ../include/my.h
	@$(MAKE) -C ../lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug: $(SRC)
	@$(MAKE) -C ../lib/my debug
	clang -o $(NAME) $(SRC) $(DFLAGS) -g

clean:
	@rm -f $(OBJ) $(shell find . -name '*.gc*' -o -name 'vgcore.*')
	@$(MAKE) -C ../lib/my clean

fclean: clean
	@rm -f $(NAME) unit_tests
	@$(MAKE) -C ../lib/my fclean

re:
	@$(MAKE) fclean
	@$(MAKE) all

../include/my.h: ../lib/my/my.h
	cp -f $< $@

.PHONY: all debug clean fclean re
