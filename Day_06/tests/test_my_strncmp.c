/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test_strncmp)
{
    char str[] = "Hello_World\n";
    char str_2[] = "Hello";

    my_strncmp(str, str_2, 4);
    strncmp(str, str_2, 4);
}
