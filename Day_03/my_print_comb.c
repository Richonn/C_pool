/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** my_print_comb
*/

#include <unistd.h>

void my_putchar(char c);

void put_digits(int x, int y, int z)
{
    my_putchar(x + 48);
    my_putchar(y + 48);
    my_putchar(z + 48);
    my_putchar(',');
    my_putchar(' ');
}

void my_put_last(void)
{
    my_putchar('7');
    my_putchar('8');
    my_putchar('9');
}

int my_print_comb(void)
{
    int x = 0;
    int y = 1;
    int z = 2;

    for (; x != 7 && y <= 8 && z <= 9; (y == 8) ?
    (x += 1, y = x + 1, z = x + 2) :
    ((z == 9) ? (y += 1, z = y + 1) : (z += 1)))
        put_digits(x, y, z);
    my_put_last();
    return 0;
}
