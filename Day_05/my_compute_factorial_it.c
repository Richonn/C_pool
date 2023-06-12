/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int res = 0;

    if (nb > 12)
        return 0;
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    for (res = 1; nb != 0; nb--)
        res = nb * res;
    return res;
}
