/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_apply_prefix
*/

#include "include/btree.h"

#include <stddef.h>
#include <stdlib.h>

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        btree_apply_prefix(root->left, applyf);
    if (root->right != NULL)
        btree_apply_prefix(root->right, applyf);
}
