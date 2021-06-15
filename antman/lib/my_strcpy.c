/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** there's a problem: the intra is not down
*/

#include "my.h"

char *my_strcpy(char letter, char *binary)
{
    int base = 2;
    char *ret = malloc(sizeof(char) * mylen(binary) + 5);

    ret[0] = letter;
    ret[1] = mylen(binary) + 48;
    for (int y = 0; binary[y] != '\0'; y++) {
        ret[base] = binary[y];
        base++;
    } ret[base] = '\0';
    return (ret);
}