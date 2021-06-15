/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-antman-yannick.ferrard
** File description:
** antman
*/

#include "my.h"

int error(int nb)
{
    static int err;

    if (nb != 0)
        err = nb;
    return (err);
}
int find_extension (char *str)
{
    int i = 0;

    for (; str[i] != '.'; i++) {
        if (str[i] == '\0')
            return (0);
    }
    return (i);
}

int args_tester(char *str, char *str2)
{
    int i = find_extension(str2);
    int a = i;

    if (mylen(str) != 1 && i == 0)
        return (1);
    if (str[0] != '1' && str[0] != '2' && str[0] != '3')
        return (1);
    for (; str2[i] != '.'; a++, i++);
    if (str[0] == '1') {
        if (str2[i + 1] == 'l' && str2[i + 2] == 'y' && str2[i + 3] == 'r')
            return (0);
    } i = a;
    if (str[0] == '2') {
        if (str2[i + 1] == 'h' && str2[i + 2] == 't'
            && str2[i + 3] == 'm' && str2[i + 4] == 'l')
            return (0);
    } i = a;
    if (str[0] == '3') {
        if (str2[i + 1] == 'p' && str2[i + 2] == 'p' && str2[i + 3] == 'm')
            return (0);
    } return (1);
}

int error_extend(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (args_tester(av[2], av[1]) != 0)
        return (84);
    return (0);
}

int main(int argc, char **argv)
{
    char *buffer = first_step(argc, argv);

    if (error(0) == 84 || error_extend(argc, argv) == 84)
        return (84);
    who_and_how_many(buffer);
    free(buffer);
}