/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** my_put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    (nb == -2147483648) ? (my_putchar('-'), my_putchar('2'), nb = 147483648) :
    nb;
    (nb < 0) ? (my_putchar('-'), (nb = nb * -1)) : nb;
    (nb >= 9) ? (my_put_nbr(nb / 10)) : nb;
    my_putchar(nb % 10 + '0');
    return 0;
}
