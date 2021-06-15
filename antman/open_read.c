/*
** EPITECH PROJECT, 2021
** first_step
** File description:
** 01100010 01101001 01101110 01100001 01110010 01111001
*/

#include "my.h"

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