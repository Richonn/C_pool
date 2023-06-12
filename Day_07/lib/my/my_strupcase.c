/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strupcase
*/

#include "include/my.h"

int is_alpha_low(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 2;
}

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (is_alpha_low(str[i]) == 1)
            str[i] -= 32;
    return str;
}
