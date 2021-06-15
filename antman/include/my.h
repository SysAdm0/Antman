/*
** EPITECH PROJECT, 2020
** make
** File description:
** my.h
*/

#ifndef _ANTMAN_
#define _ANTMAN_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Tree {
    int data;
    struct Tree *left;
    struct Tree *right;
} Tree;

typedef struct Heap {
    int save;
    int size;
    int *arr;
} Heap;

Heap *init_heap(int *tab);
Tree *add_node(int data);
void my_putchar(char c);
void insert(Heap *heap, int data);
int min_heap(Heap *heap);
int save(int nb);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int mylen(char *str);
int size(char *str);
int error(int nb);
int *my_revnbr(int *nbr);
int who_and_how_many(char *buffer);
int main_tree(char *str, int *tab, char *buffer);
int convert(char *index, char *buffer, char **tab);
int save(int nb);
int add_nb(int nb);
int mylen_str(int nb);
char *first_step(int argc, char **argv);
char *my_strcpy(char letter, char *binary);
char *my_revstr(char *str);

#endif /* _ANTMAN_ */