/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday13-leandre.cacarie
** File description:
** btree
*/

#ifndef BTREE_H_
    #define BTREE_H_

typedef struct btree {
struct btree * left ;
struct btree * right ;
void * item ;
} btree_t ;

#endif /* !BTREE_H_ */
