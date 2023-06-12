/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_create_node
*/

#include <stddef.h>
#include "include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *node = malloc(sizeof(btree_t));

    node->item = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}
