/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    if (nb == 0 || nb >= 2147483647)
        return 0;
    if (nb == 1)
        return 1;
    for (int i = 1; i <= nb / 2; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
