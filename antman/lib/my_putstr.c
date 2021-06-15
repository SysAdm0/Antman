/*
** EPITECH PROJECT, 2020
** task01
** File description:
** example of bad code:
*/

#include "my.h"

int my_putstr(char const *str)
{
    char letter;
    int x = 0;

    while (str[x] != '\0') {
        letter = str[x];
        my_putchar(letter);
        x++;
    }
}