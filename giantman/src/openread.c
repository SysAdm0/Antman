/*
** EPITECH PROJECT, 2021
** boostrap
** File description:
** openread
*/

#include "my.h"

int my_size(int nb)
{
    static int siz;

    if (nb != 0)
        siz = nb;
    return (siz);
}

int error(int nb)
{
    static int err;

    if (nb != 0)
        err = nb;
    return (err);
}

int size(char *str)
{
    struct stat size;

    if (stat(str, &size) == -1)
        error(84);
    return (size.st_size);
}

char *first_step(int argc, char **argv)
{
    int fd = 0;
    int buffsize = size(argv[1]) + 1;
    char *buffer = malloc(sizeof(char) * buffsize);

    my_size(buffsize - 1);
    if (argc != 3) {
        error(84);
        return (0);
    } fd = open(argv[1], O_RDONLY, buffsize);
    if (fd < 0 || error(0) == 84) {
        error(84);
        return (0);
    } read(fd, buffer, buffsize);
    if (buffer[0] == '\0') {
        error(84);
        return (0);
    } return (buffer);
}