##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all
all: COMPIL
COMPIL:
	@cd antman && make
	@cd giantman && make
clean:
	@cd antman && make clean
	@cd giantman && make clean
fclean: clean
re: fclean all