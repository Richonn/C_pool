/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-leandre.cacarie
** File description:
** my_strlen
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}
