/*
** EPITECH PROJECT, 2021
** singleton
** File description:
** C-x C-c
*/

#include "my.h"

int save(int nb)
{
    static int min;

    if (nb != 0)
        min = nb;
    return (min);
}

int add_nb(int nb)
{
    static int add;

    if (nb != 0)
        add += 1;
    return (add);
}

int mylen_str(int nb)
{
    static int size_t;

    if (nb != 0)
        size_t = nb;
    return (size_t);
}