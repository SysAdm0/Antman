/*
** EPITECH PROJECT, 2020
** mylen
** File description:
** hey. real programmers use vim
*/

int mylen(char *str)
{
    int x = 0;

    for (x = 0; str[x] != '\0'; x++);
    return (x);
}
