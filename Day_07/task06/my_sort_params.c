/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-leandre.cacarie
** File description:
** my_sort_params
*/

#include <unistd.h>

void my_putchar(char c);

void my_putstr(char *str);

int my_strcmp(char const *s1, char const *s2);

void my_swap(char **str_1, char **str_2)
{
    char *temp = *str_1;

    *str_1 = *str_2;
    *str_2 = temp;
}

void check_value(int i, char **tab, char *str)
{
    if (my_strcmp(tab[i], tab[i + 1]) > 0)
        my_swap(&tab[i], &tab[i + 1]);
}

void my_sort_params(char **tab, int size)
{
    char *str;

    for (int stage = 0; stage < size - 1; stage++)
        for (int i = 0; i < (size - stage - 1); i++)
            check_value(i, tab, str);
}

int main(int ac, char **av)
{
    my_sort_params(av, ac);
    for (int i = 0; av[i]; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}
