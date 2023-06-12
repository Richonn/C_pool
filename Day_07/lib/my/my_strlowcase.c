/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strlowcase
*/

#include "include/my.h"

int is_alpha_up(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 2;
}

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (is_alpha_up(str[i]) == 1)
            str[i] += 32;
    return str;
}
