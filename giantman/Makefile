##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all

SRC 	=	$(wildcard $(wildcard lib/*.c) src/*.c)

CFLAGS	=	-I./include -g3

NAME	=	giantman

all: COMPIL
COMPIL:	$(SRC:.c=.o)
	@gcc -o $(NAME) $(SRC) $(CFLAGS)
	@echo "-> Done"
clean:
	rm -f lib/*.o
	rm -f src/*.o
fclean: clean
	rm -f $(NAME)
re: fclean all
