/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday11-leandre.cacarie
** File description:
** my_find_node
*/

#include "include/mylist.h"
#include <stdio.h>
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *node = NULL;

    if (begin == NULL || *begin == NULL)
        return NULL;
    for (; node != NULL; node = node->next)
        if (cmp(data_ref, node->data) == 0)
            return (begin);
    return NULL;
}
