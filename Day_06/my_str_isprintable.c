/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_is_printable
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int len = my_strlen(str) - 1;

    if (str[0] == '\0')
        return 1;
    if (len == 0)
        return 1;
    for (int i = 0; str[i]; i++)
        if (str[i] < ' ' && str[i] > '~')
            return 0;
    return 1;
}
