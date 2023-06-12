/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *str, int n);

Test(my_strncpy, strncpy_test)
{
    char dest [6] = {0};

    my_strncpy(dest , "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
