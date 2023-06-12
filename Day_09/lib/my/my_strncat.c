/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** my_strncat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char *src, int n)
{
    int len = my_strlen(dest);
    int i = 0;

    for (; i < n && src[i]; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
