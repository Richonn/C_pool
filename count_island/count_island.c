/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-countisland-leandre.cacarie
** File description:
** count_island
*/

#include <stddef.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}

int parcour_map(char **world)
{
    int column_size = 0;

    for (; world[column_size] != NULL; column_size++);
    return column_size;
}

void recurscan(char **world, int i, int j, int count)
{
    int nb_line = my_strlen(world[1]);
    int nb_colmn = parcour_map(world);
    char c = count + 48;

    world[i][j] = c;
    if (j - 1 >= 0 && world[i][j - 1] == 'X')
        recurscan(world, i, j - 1, count);
    if (j + 1 <= nb_line && world[i][j + 1] == 'X')
        recurscan(world, i, j + 1, count);
    if ((i + 1 < nb_colmn) && world[i + 1][j] == 'X')
        recurscan(world, i + 1, j, count);
    if ((i - 1 > 0) && world[i - 1][j] == 'X')
        recurscan(world, i - 1, j, count);
}

int count_island(char **world)
{
    int nb_line = 0;
    int nb_colmn = 0;
    int nb_isld = 0;

    if (world[0] == NULL)
        return 0;
    nb_line = my_strlen(world[1]);
    nb_colmn = parcour_map(world);
    for (int i = 0; i < nb_colmn; i++) {
        for (int j = 0; j < nb_line; j++)
            (world[i][j] == 'X') ? (recurscan(world, i, j, nb_isld), nb_isld++)
            : nb_isld;
    }
    return nb_isld;
}
