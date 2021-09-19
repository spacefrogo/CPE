##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## libmy makefile
##

CFLAGS=-Wall -Werror -I./ -I./my_printf
DFLAGS=-Wall -I./ -I./my_printf -g
SRC=$(shell find . -type f -name '*.c') $(shell find ./my_printf -type f -name '*.c')
OBJ=$(SRC:.c=.o)

all: link

../../include/my.h: ./my.h
	@cp -f ./my.h ../../include/my.h

link: $(OBJ) ../../include/my.h
	@ar rcs libmy.a $(OBJ)
	@mkdir -p ../../include
	@cp -f ./libmy.a ../libmy.a

debug: $(SRC) ../../include/my.h
	@gcc -c $(SRC) $(DFLAGS)
	@ar rcs libmy.a $(OBJ)
	@mkdir -p ../../include
	@cp -f ./libmy.a ../libmy.a

clean:
	@rm -f $(OBJ) ./libmy.a ../libmy.a

fclean: clean ../../include/my.h
	@rm -f ../../include/my.h

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all obj link clean fclean re debug
