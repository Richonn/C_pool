/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_str_isalpha
*/

#include "../../include/my.h"

int is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 2;
}

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i]; i++)
        if (is_alpha(str[i]) != 1)
            return 0;
    return 1;
}
