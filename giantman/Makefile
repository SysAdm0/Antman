##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all
SRC		=	giantman.c \
			actionlist.c \
			decompress_giant.c \
			openread.c \
			lib/my_putchar.c	\
			lib/mylen.c

all: COMPIL

OBJ = $(SRC:.c=.o)

COMPIL:
	@gcc -o giantman -I include/ $(SRC) -g3
	@echo "-> Done"
clean:
	rm -f lib/*.o
	rm -f *.o
	rm -f libmy.a
fclean: clean
re: fclean all