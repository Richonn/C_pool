/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** print
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
