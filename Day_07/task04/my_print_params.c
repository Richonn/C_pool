/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** my_print_params
*/

#include "../lib/my/include/my.h"

int main(int ac, char **av)
{
    for (int i = 0; av[i]; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}
