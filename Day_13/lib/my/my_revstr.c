/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int a = my_strlen(str) - 1;
    char c;

    for (int b = 0; b <= a; a--, b++) {
        c = str[b];
        str[b] = str[a];
        str[a] = c;
    }
    return str;
}
