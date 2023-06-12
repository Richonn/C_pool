/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-countisland-leandre.cacarie
** File description:
** island
*/

#ifndef ISLAND_H_
    #define ISLAND_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <string.h>

char *open_file(char *filename);
char **str_to_array(char *str);
void my_putchar(char c);
void my_putstr(char *str);
int nb_line(char *str);
int line_size(char *str);
int count_island(char **av);
int check_valid_map(char *str);
void island(char **tab);
int my_put_nbr(int nb);

#endif /* !ISLAND_H_ */
