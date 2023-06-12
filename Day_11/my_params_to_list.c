/*
** EPITECH PROJECT, 2022
** day_11
** File description:
** my_params_to_list
*/

#include "include/mylist.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_list(linked_list_t *linked_list);

void add_node(linked_list_t *linked_list, char *data)
{
    linked_list_t *new = malloc(sizeof(*new));

    new->data = data;
    new->next = linked_list;
    linked_list = new;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list;

    for (int i = 0; av[i]; i++)
        add_node(list, av[i]);
    return list;
}
