/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_str_isnum
*/

int is_num(char c)
{
    if (c >= '1' && c <= '9')
        return 1;
    return 2;
}

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i]; i++)
        if (is_num(str[i]) != 1)
            return 0;
    return 1;
}
