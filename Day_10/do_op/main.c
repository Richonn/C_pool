/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** main
*/

#include "../include/my.h"

int error(int ac, char **av);

void get_op(char *str_1, char *str_sign, char *str_2);

int main(int ac, char **av)
{
    get_op(av[1], av[2], av[3]);
    my_putchar('\n');
    return 0;
}
