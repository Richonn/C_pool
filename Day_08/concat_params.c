/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-leandre.cacarie
** File description:
** concat_params
*/

#include "lib/my/include/my.h"

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *str;

    for (; j < argc; j++)
        j += my_strlen(argv[j]) + 1;
    str = malloc(sizeof(char) * (j + 1));
    for (int a = 0; a < argc - 1; a++) {
        my_strcat(str, argv[a]);
        my_strcat(str, "\n");
    }
    str = my_strcat(str, argv[argc - 1]);
    return str;
}
