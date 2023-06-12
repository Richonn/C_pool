/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** my_show_param_array
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av);

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != NULL; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        for (int j = 0; par[i].word_array[j]; j++) {
            my_putstr(par[i].word_array[j]);
            my_putchar('\n');
        }
    }
    return 0;
}
