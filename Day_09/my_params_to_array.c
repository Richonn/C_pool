/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** my_params_to_array
*/

#include "include/my.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *str = malloc(sizeof(struct info_param) * (ac + 1));

    for (int i = 0; i < ac; i++) {
        str[i].length = my_strlen(av[i]);
        str[i].str = av[i];
        str[i].copy = my_strdup(av[i]);
        str[i].word_array = my_str_to_word_array(av[i]);
    }
    str[ac].str = NULL;
    return str;
}
