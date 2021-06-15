/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct dictionary_s
{
    char *bin;
    char a;
    struct dictionary_s *next;
} dictionary_t;

char *first_step(int argc, char **argv);
dictionary_t *putinlistfront(dictionary_t *list, char *bin, char a);
void decompress_giant(dictionary_t *element, char *file);
int mylen(char *str);
int error(int nb);
int my_size(int nb);
void my_putchar(char c);
#endif /* !MY_H_ */
