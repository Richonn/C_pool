/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday05-leandre.cacarie
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int temp = 0;

    if (nb < 0)
        return 0;
    if (nb == 2)
        return 1;
    if (nb == 0 || nb == 1)
        temp++;
    for (int i = 2; i < nb; i++)
        if (nb % i == 0) {
            temp++;
        } else
            temp;
    return ((temp == 0) ? 1 : 0);
}
