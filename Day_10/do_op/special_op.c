/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** special_op
*/

#include "../include/my.h"

void mod(int a, int b)
{
    (b != 0) ? (my_put_nbr(a % b)) : (my_putstr("Stop: modulo by zero"));
}

void division(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop: division by zero");
        return 0;
    }
    (b != 0) ? (my_put_nbr(a / b)) : (my_putstr("Stop: division by zero"));
}
