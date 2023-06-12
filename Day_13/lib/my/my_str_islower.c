/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_str_islower
*/

#include "my.h"

int is_alpha_low(char c);

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i]; i++)
        if (is_alpha_low(str[i]) != 1)
            return 0;
    return 1;
}
