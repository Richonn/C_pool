/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_insert_data
*/

#include "include/btree.h"
#include <stddef.h>
#include <stdlib.h>

btree_t *btree_create_node(void *item);

void btree_insert_data(btree_t **root, void *item, int (*cmp)())
{
    btree_t *node = malloc(sizeof(btree_t));

    if (*root == NULL)
        return;
    node = *root;
    if (cmp(item, node->item) < 0) {
        if (node->left)
            btree_insert_data(&node->left, item, cmp);
        else
            node->left = btree_create_node(item);
    } else {
        if (node->right)
            btree_insert_data(&node->right, item, cmp);
        else
            node->right = btree_create_node(item);
    }
}
