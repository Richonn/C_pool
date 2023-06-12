/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strcapitalize
*/

#include "include/my.h"

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int is_word = 1;

    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && is_word == 1) {
            str[i] -= 32;
            is_word = 0;
        }
        if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
            is_word = 1;
    }
    return str;
}
