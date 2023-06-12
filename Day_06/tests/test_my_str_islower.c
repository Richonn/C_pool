/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_str_islower
*/

#include <criterion/criterion.h>

int is_alpha_low(char c);

int my_str_islower(char const *str);

Test(my_str_islower, is_lower_test)
{
    char str[] = "czionxczi czixnocez";
    char str_2[] = "czoncxOZN znon485";
    char str_3[] = "ecfeokcnzo";

    my_str_islower(str);
    cr_assert_eq(my_str_islower(str), 0);
    my_str_islower(str_2);
    cr_assert_eq(my_str_islower(str_2), 0);
    my_str_islower(str_3);
    cr_assert_eq(my_str_islower(str_3), 1);
}
