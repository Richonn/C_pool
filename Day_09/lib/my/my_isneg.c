/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** my_isneg
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}
