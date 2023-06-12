/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-leandre.cacarie
** File description:
** my_str_to_word_array
*/

#include "lib/my/include/my.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int is_alpha_num(char c)
{
    if (c >= '1' && c <= '9')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int n_word(char const *str)
{
    int j = 0;

    for (int i = 0; str[i]; i++)
        if (is_alpha_num(str[i]) != 1 && is_alpha_num(str[i]) != 1)
            j++;
    j++;
    return j;
}

int check_valid_str(char const *str)
{
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i]; i++);
}

char *del_space(char const *str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str) + 1;
    char *new = malloc(sizeof(char) * (len + 1));

    for (; is_alpha_num(str[i]) != 1; i++)
        if (str[i] == '\0')
            return new;
    for (; is_alpha_num(str[i]) == 0; i++);
    for (; str[i]; i++) {
        for (; str[i] && is_alpha_num(str[i]) == 0 &&
        is_alpha_num(str[i + 1]) != 1; i++);
        if (str[i] == '\0')
            return new;
        new[j] = str[i];
        j++;
    }
    new[j] = '\0';
    return new;
}

char **my_str_to_word_array(char const *str)
{
    int x = 0;
    int index = 0;
    int stock_clm = 0;
    char *new = del_space(str);
    int nb_word = n_word(new);
    char **tab = malloc(sizeof(char *) * (n_word(new) + 1));

    if (new == NULL)
        tab[0] = NULL;
    for (int y = 0; y != nb_word; y++, x++) {
        stock_clm = x;
        for (; is_alpha_num(new[x]) == 1; x++);
        tab[y] = malloc(sizeof(char) * (x - stock_clm + 1));
        for (index = 0; stock_clm < x; stock_clm++, index++)
            tab[y][index] = new[stock_clm];
        tab[y][index + 1] = '\n';
    }
    tab[n_word(new)] = NULL;
    return tab;
}
