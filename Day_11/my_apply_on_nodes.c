/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday11-leandre.cacarie
** File description:
** my_apply_on_nodes
*/

#include "include/mylist.h"
#include <stdio.h>
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    for (; begin->next;) {
        (*f)(begin->next);
        begin = begin->next;
    }
    return 0;
}
