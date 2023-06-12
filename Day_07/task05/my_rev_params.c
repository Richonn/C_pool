/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** my_rev_params
*/

#include "../lib/my/include/my.h"

int main(int ac, char **av)
{
    int i = ac - 1;

    for (; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}
