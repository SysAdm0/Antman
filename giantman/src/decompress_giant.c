/*
** EPITECH PROJECT, 2021
** boostrap
** File description:
** decompress_giant
*/
#include "my.h"

char *bintracker(char *file, int i)
{
    char *bin = malloc(sizeof(char) * 8);

    for (int j = 0; j < 8; i++, j++)
        bin[j] = file[i];
    return (bin);
}

int bincmp(char *str1, char *str2)
{
    int i = 0;
    int j = 0;

    for (; str1[i] != '\0' && str2[j] != '\0'; i++, j++) {
        if (str1[i] != str2[j])
            return (1);
    } return (0);
}

int startbin (char *file)
{
    int i = 0;

    for (; file[i] != '/' || file [i + 1] != '!' || file[i + 2] != '|'; i++);
    return (i + 3);
}

void decompress_giant(dictionary_t *element, char *file)
{
    int i = 0;
    int a = 0;
    int z = mylen(file);
    char *bin = bintracker(file, i);
    dictionary_t *temp = malloc(sizeof(temp));

    temp = element;
    while (z > i) {
        element = temp;
        while (bincmp(bin, element->bin) != 0) {
            element = element->next;
        }
        if (bincmp(bin, element->bin) == 0) {
            a = mylen(element->bin);
            i = i + a;
            my_putchar(element->a);
        } bin = bintracker(file, i);
    }
}