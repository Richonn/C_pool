/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** my_print_comb2
*/

#include <unistd.h>

void my_putchar(char c);

void print_digit(int x)
{
    char a = (x / 10) + '0';
    char b = (x % 10) + '0';

    my_putchar(a);
    my_putchar(b);
}

int my_print_comb2(void)
{
    int b = 1;

    for (int a = 0; a < 99; a++) {
        b = a + 1;
        for (; b < 100; b++) {
            print_digit(a);
            my_putchar(' ');
            print_digit(b);
            (a != 98 || b != 99) ? (my_putchar(','), my_putchar(' ')) : 0;
        }
    }
    return 0;
}
