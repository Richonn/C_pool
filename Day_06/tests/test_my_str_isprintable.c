/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_str_isprintable
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, test_is_printable)
{
    char str[] = "czonczio koczoi8475_'è(";

    my_str_isprintable(str);
    cr_assert_eq(my_str_isprintable(str), 1);
    my_str_isprintable("\t");
    cr_assert_eq(my_str_isprintable(""), 1);
}
