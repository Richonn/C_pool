/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday11-leandre.cacarie
** File description:
** my_apply_on_matching_nodes
*/

#include "include/mylist.h"
#include <stdio.h>
#include <stdlib.h>

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
void const *data_ref, int (*cmp)())
{
    if (begin == NULL)
        return 84;
    for (; begin != NULL;) {
        if ((*cmp)(begin->data, data_ref) == 0)
            (*f)(begin->data);
        begin = begin->next;
    }
    return 0;
}
