/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** my_sort_word_array
*/

#include "include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void exchange(char **str_1, char **str_2)
{
    char *temp = *str_1;

    *str_1 = *str_2;
    *str_2 = temp;
}

void compare_value(char **tab, int i)
{
    if (my_strcmp(tab[i], tab[i + 1]) > 0)
        exchange(&tab[i], &tab[i + 1]);
}

int my_sort_word_array(char **tab)
{
    for (int stage = 0; tab[stage]; stage++)
        for (int i = 0; tab[stage][i]; i++)
            compare_value(tab, stage);
    return 0;
}

int main(int ac, char **av)
{
    my_sort_word_array(av);
    for (int i = 0; av[i]; i++)
        my_putstr(av[i]);
}
