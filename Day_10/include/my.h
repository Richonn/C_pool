/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <string.h>
    #include <stdio.h>
    #include <limits.h>
    #include <stdlib.h>
    #include <stddef.h>

char *recup_str(char *str, int i);
void my_putchar(char c);
int my_isneg(int n);
int is_alpha(char c);
int is_alpha_low(char c);
int is_alpha_up(char c);
int my_put_nbr(int nb);
int is_num(char c);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int check_int(int nb, int neg, char const *str, int i);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
void check_value(int i, int *array, int temp);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char const *str);
char *del_space(char const *str);
int line_size(char const *str);
int n_word(char const *str);
int is_alpha_num(char c);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char *src, int n);
int my_show_word_array(char *const *tab);

#endif /* !MY_H_ */
