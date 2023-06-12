/*
** EPITECH PROJECT, 2022
** star
** File description:
** print_body
*/

void my_putchar(char c);

void print_body(int nb)
{
    int size = (2 * nb) + 1;
    int space = (2 * nb) - 3;

    for (int i = 0; i != size; i++)
        my_putchar('*');
    for (int i = 0; i != space; i++)
        my_putchar(' ');
    for (int i = 0; i != size; i++)
        my_putchar('*');
    my_putchar('\n');
}
