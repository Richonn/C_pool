/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** tests_my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

char *my_strlowcase(char *str);

int is_alpha_up(char c);

Test(my_strcapitalize, test_capitalize)
{
    char str[] = "icznz czincCEINC UCez=cez";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Icznz Czincceinc Ucez=Cez");
}
