/*
** EPITECH PROJECT, 2021
** my_reverse
** File description:
** man man
*/

#include "../my.h"

char *my_revstr(char *str)
{
    char temp;
    int size = mylen(str);
    int x = 0;
    int y = size - 1;

    while (x < y) {
        temp = str[x];
        str[x] = str[y];
        str[y] = temp;
        x++;
        y--;
    } return (str);
}

int *my_revnbr(int *nbr)
{
    int temp;
    int size = 0;
    int x = 0;
    int y = 0;

    for (; nbr[size] != '\0'; size++);
    y = size - 1;
    while (x < y) {
        temp = nbr[x];
        nbr[x] = nbr[y];
        nbr[y] = temp;
        x++;
        y--;
    } return (nbr);
}