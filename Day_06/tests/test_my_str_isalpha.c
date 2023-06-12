/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>

int is_alpha(char c);

int my_str_isalpha(char const *str);

Test(my_str_isalpha, test_isalpha)
{
    char str[] = "CheRcher";
    char str_2[] = "CherCher tOi";

    my_str_isalpha(str);
    cr_assert_eq(my_str_isalpha(str), 1);
    my_str_isalpha(str_2);
    cr_assert_eq(my_str_isalpha(str_2), 0);
}
