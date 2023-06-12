/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, strstr_test)
{
    char str [] = "Hello_World\n";
    char str_2[] = "World";

    my_strstr(str, str_2);
    strstr(str, str_2);
}
