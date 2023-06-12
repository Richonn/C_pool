/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-leandre.cacarie
** File description:
** my_strdup
*/

#include "lib/my/include/my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (; src[i]; i++)
        str[i] = src[i];
    str[i] = '\0';
    return str;
}
