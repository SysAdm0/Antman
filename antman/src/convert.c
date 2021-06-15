/*
** EPITECH PROJECT, 2021
** convert
** File description:
** you're a bad developer
*/

#include "my.h"

int bin_to_dec(char *nb)
{
    int add = 0;
    int decimal = 0;
    int power2[10] = {1, 2, 4, 8, 16, 32, 64, 128};

    for (int x = 7; x >= 0; x--) {
        if (nb[x] - 48 == 1) {
            decimal = decimal + power2[add];
        } add++;
    } return (decimal);
}

int bin_to_char(char nb, int end)
{
    static char *binary;
    static int step;

    if (end == 1) {
        for (int x = step; x < 8; x++)
            binary[x] = 48;
        my_putchar(bin_to_dec(binary));
        for (int x = step; x < 8; x++)
            my_putchar('*');
        return (0);
    } if (step == 0) {
        binary = malloc(sizeof(char) * 100);
        binary[step] = nb;
        step++;
    } else if (step == 8) {
        my_putchar(bin_to_dec(binary));
        binary[0] = nb;
        step = 1;
    } else {
        binary[step] = nb;
        step++;
    }
}

void push(char *str)
{
    for (int x = 0; str[x] != '\0'; x++)
        bin_to_char(str[x], 0);
}

void send_alpha(char **tab, char *index)
{
    char *ret;

    for (int x = 0; index[x] != '\0'; x++) {
        ret = my_strcpy(index[x], tab[x]);
        my_putstr(ret);
    } my_putstr("/!|");
}

int convert(char *index, char *buffer, char **tab)
{
    send_alpha(tab, index);
    for (int x = 0; buffer[x] != '\0'; x++) {
        for (int y = 0; index[y] != '\0'; y++) {
            if (buffer[x] == index[y])
                push(tab[y]);
        }
    } bin_to_char(tab[0][0], 1);
}