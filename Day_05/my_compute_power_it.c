/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int res = 1;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    for (int i = 0; i < p; i++)
        res = res * nb;
    return res;
}
