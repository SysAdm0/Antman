/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** main
*/

#include "my.h"

int lenghtbin (char *file, int i)
{
    return (file[i] - 48);
}

int end_dico(char *file, int i)
{
    if (file[i] == '/' && file[i + 1] == '!' && file[i + 2] == '|')
        return (0);
    return (1);
}

dictionary_t *index_giantman(char *file)
{
    dictionary_t *element = malloc(sizeof(element));
    char *bin;
    int j = 0;
    char a;
    int z = 0;
    int binlenght = 0;

    for (int i = 0; end_dico(file, i) != 0;) {
        if (i == 0 || z == binlenght) {
            a = file[i];
            i++;
            z = 0;
            binlenght = lenghtbin(file , i);
            i++;
        } bin = malloc(sizeof(char) * binlenght + 1);
        for (; z < binlenght; z++, i++, j++) {
            bin[j] = file[i];
        } j = 0;
        element = putinlistfront(element, bin, a);
    } return (element);
}

char *decompress_bitshift(char *str)
{
    char *file = malloc(sizeof(char) * my_size(0) * 8);
    int huit = 8;
    int stop = 0;
    int x = 0;
    int j = 0;

    for (; str[x] != '\0'; x++) {
        if (end_dico(str, x) != 1) {
            for (x += 3; x < my_size(0); x++) {
            for (int y = x; str[y + 1] == '*'
            && str[y + 2] == '*'; y++, stop++);
            if (stop != 0) {
                for (int i = 0; i < huit - (stop + 1); i++, j++)
                    file[j] = (!!((str[x] << i) & 0x80)) + 48;
                return (file);
            } for (int i = 0; i < huit; i++, j++)
                file[j] = (!!((str[x] << i) & 0x80)) + 48;
            }
        }
    } return (file);
}

int main (int ac, char **av)
{
    dictionary_t *element = malloc(sizeof(element));
    char *file = first_step(ac, av);

    if (error(0) == 84)
        return (84);
    element = index_giantman(file);
    file = decompress_bitshift(file);
    decompress_giant(element, file);
}