/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** error
*/

#include "../include/my.h"

int error(int ac, char **av)
{
    if (ac != 4)
        return 0;
    if (my_getnbr(av[1]) == 0 || my_getnbr(av[3]) == 0)
        return 0;
    return 1;
}
