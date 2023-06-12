/*
** EPITECH PROJECT, 2022
** star
** File description:
** my_putstr
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
