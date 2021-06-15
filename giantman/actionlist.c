/*
** EPITECH PROJECT, 2020
** bootstrappuswap
** File description:
** putarginlist
*/
#include "include/my.h"

dictionary_t *putinlistfront(dictionary_t *list, char *bin, char a)
{
    dictionary_t *element = malloc(sizeof(dictionary_t));

    element->bin = bin;
    element->a = a;
    element->next = NULL;
    if (list == NULL)
        return (element);
    element->next = list;
    return (element);
}