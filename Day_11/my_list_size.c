/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday11-leandre.cacarie
** File description:
** my_list_size
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    for (; begin; i++)
        begin = begin->next;
    return i;
}
