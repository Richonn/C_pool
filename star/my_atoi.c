/*
** EPITECH PROJECT, 2022
** star
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int res = 0;

    for (int i = 0; str[i] >= '0' && str[i] <= '9' && str[i]; i++)
        res = res * 10 + str[i] - '0';
    return res;
}
