/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_apply__suffix
*/

#include "include/btree.h"
#include <stddef.h>

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    if (root->left)
        btree_apply_suffix(root->left, applyf);
    if (root->right)
        btree_apply_suffix(root->right, applyf);
    applyf(root->item);
}
