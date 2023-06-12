/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1) - 1;
    int len_s2 = my_strlen(s2) - 1;

    if (len_s1 < len_s2)
        return -1;
    if (len_s2 < len_s1)
        return 1;
    for (int i = 0; s1[i]; i++)
        if (s1[i] != s2[i])
            return 1;
    return 0;
}
