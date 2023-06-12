/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday11-leandre.cacarie
** File description:
** my_rev_list
*/

#include "include/mylist.h"
#include <stdlib.h>

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *tmp;
    linked_list_t *previous;
    linked_list_t *next;

    tmp = 0;
    previous = *begin;
    for (; previous->next != NULL;) {
        next = previous->next;
        previous->next = tmp;
        tmp = previous;
        previous = next;
    }
    previous->next = tmp;
    *begin = tmp;
}
