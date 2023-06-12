/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** get_op
*/

#include "../include/my.h"

int select_opp(int nb_1, int nb_2, int opp);

int recup_sign(char *str);

void get_op(char *str_1, char *str_sign, char *str_2)
{
    int opp = recup_sign(str_sign);
    int nb_1 = my_getnbr(str_1);
    int nb_2 = my_getnbr(str_2);

    select_opp(nb_1, nb_2, opp);
}
