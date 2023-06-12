/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
** File description:
** recup_sign
*/

#include "../include/my.h"

void add(int a, int b);

void sub(int a, int b);

void mul(int a, int b);

void mod(int a, int b);

void division(int a, int b);

int select_opp(int nb_1, int nb_2, int opp)
{
    if (opp == 1)
        add(nb_1, nb_2);
    if (opp == 2)
        sub(nb_1, nb_2);
    if (opp == 3)
        mul(nb_1, nb_2);
    if (opp == 4)
        division(nb_1, nb_2);
    if (opp == 5)
        mod(nb_1, nb_2);
    return 0;
}

int recup_sign(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+')
            return 1;
        if (str[i] == '-')
            return 2;
        if (str[i] == '\*')
            return 3;
        if (str[i] == '/')
            return 4;
        if (str[i] == '%')
            return 5;
    }
    return 0;
}
