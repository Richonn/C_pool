/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_search_item
*/

#include "include/btree.h"
#include <stddef.h>
#include <stdlib.h>

void *btree_search_item(btree_t const *root, void const *data_ref, int (*cmpf)())
{
    if (root == NULL)
        return NULL;
    if (cmpf(data_ref, root->item) == 0)
        return root->item;
    if (root->left)
        return btree_search_item(root->left, data_ref, cmpf);
    if (root->right)
        return btree_search_item(root->right, data_ref, cmpf);
    return NULL;
}
