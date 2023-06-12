/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** my_print_digits
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    for (int i = 48; i <= 57; i++)
        my_putchar(i);
    return 0;
}
