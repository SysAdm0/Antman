##
## EPITECH PROJECT, 2020
## make
## File description:
## makefile
##

.PHONY: fclean all
SRC		=		lib/my_putchar.c	\
				lib/my_put_nbr.c	\
				lib/my_putstr.c	\
				lib/mylen.c	\
				lib/my_reverse.c	\
				lib/my_strcpy.c	\
				singleton.c			\
				open_read.c			\
				sort_caracters.c	\
				btree.c	\
				heap.c	\
				convert.c	\
				antman.c
all: COMPIL
COMPIL:	$(SRC:.c=.o)
	@ar rc libmy.a lib/*.o
	@gcc -o antman *.o libmy.a -g3
	@echo "-> Done"
clean:
	rm -f lib/*.o
	rm -f *.o
	rm -f libmy.a
fclean: clean
re: fclean all