/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
