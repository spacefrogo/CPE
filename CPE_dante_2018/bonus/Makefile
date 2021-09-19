##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## standard makefile
##

SRC=$(wildcard solver/*.c) $(wildcard generator/*.c)

all: $(SRC) include/my.h include/generator.h include/solver.h
	@$(MAKE) -C ./lib/my
	@$(MAKE) -C ./solver
	@$(MAKE) -C ./generator

debug:
	@$(MAKE) -C ./lib/my debug
	@$(MAKE) -C ./solver debug
	@$(MAKE) -C ./generator debug

clean:
	@$(MAKE) -C ./lib/my clean
	@$(MAKE) -C ./solver clean
	@$(MAKE) -C ./generator clean

fclean: clean
	@rm -f unit_tests
	@$(MAKE) -C ./lib/my fclean
	@$(MAKE) -C ./solver fclean
	@$(MAKE) -C ./generator fclean

include/my.h: lib/my/my.h
	cp -f $< $@

re:
	$(MAKE) fclean
	$(MAKE) $(NAME)

tests_run:
	@$(MAKE) -C ./lib/my
	@gcc -o unit_tests $(shell find ./tests/ -name '*.c') \
		$(filter-out main.c, $(SRC)) \
		-lcriterion --coverage $(CFLAGS) \
		&& ./unit_tests

.PHONY: all debug clean fclean re tests_run
