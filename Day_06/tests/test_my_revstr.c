/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, revstr_test)
{
    char str[] = "bonjour";

    my_revstr(str);
    cr_assert_str_eq(str, "ruojnob");
}
