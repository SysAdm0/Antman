/*
** EPITECH PROJECT, 2021
** sort_caracters
** File description:
** Naruto > DBZ
*/

#include "my.h"

int check_caracters(char *who, char buffer)
{
    for (int x = 0; who[x] != '\0'; x++) {
        if (who[x] == buffer)
            return (1);
    } return (0);
}

void bubble_sort(char *who, int *how_many, char *buffer)
{
    int restart = 0;
    int len = 0;
    int temp = 0;
    char tmp;

    for (; how_many[len] != '\0'; len++);
    for (int x = 0; x <= len; x++) {
        for (int y = len; y >= 0; y--) {
            if (how_many[y] < how_many[x]) {
                temp = how_many[x];
                how_many[x] = how_many[y];
                how_many[y] = temp;
                tmp = who[x];
                who[x] = who[y];
                who[y] = tmp;
            }
        }
    }
    main_tree(who, how_many, buffer);
}

int who_and_how_many(char *buffer)
{
    char *who = malloc(sizeof(char) * mylen(buffer));
    int *how_many = malloc(sizeof(int) * mylen(buffer));
    int effect = 0;
    int add = 0;

    if (error(0) == 84)
        return (84);
    for (int x = 0; buffer[x] != '\0'; x++) {
        if (check_caracters(who, buffer[x]) == 0) {
            for (int y = x; buffer[y] != '\0'; y++) {
                if (buffer[x] == buffer[y])
                    effect++;
            } who[add] = buffer[x];
        } if (effect > 0) {
            how_many[add] = effect;
            add++;
        } effect = 0;
    } bubble_sort(who, how_many, buffer);
}