/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int res = 0;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    res = nb * my_compute_power_rec(nb, p - 1);
    return res;
}
