/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** my_show_word_array
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
