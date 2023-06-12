/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_find_prime_sup
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) != 1; nb++);
    return nb;
}
