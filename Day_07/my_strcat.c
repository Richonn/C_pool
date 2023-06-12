/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** my_strcat
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
