/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strstr
*/

#include "my.h"

char *recup_str(char *str, int i)
{
    int a = 0;

    for (; str[i]; i++, a++)
        str[a] = str[i];
    str[a] = '\0';
    return str;
}

void check_value(int i, int *seek, char *str, char const *to_find)
{
    for (int j = 0; to_find[j]; j++)
        if (str[i + j] != to_find[j]) {
            *seek = 0;
            return;
        }
}

char *my_strstr(char *str, char const *to_find)
{
    int seek;

    if (to_find[0] == '\0')
        return str;
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i]; i++) {
        for (; str[i + seek] == to_find[seek] &&
        to_find[seek] != '\0'; seek++);
        if (to_find[seek] == '\0')
            return &str[i];
    }
    return 0;
}
