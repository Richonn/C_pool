/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree_apply_infix
*/

#include "include/btree.h"
#include <stdlib.h>
#include <stddef.h>

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    if (root->left)
        btree_apply_infix(root->left, applyf);
    if (root->right)
        btree_apply_infix(root->right, applyf);
}
