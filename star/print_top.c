/*
** EPITECH PROJECT, 2022
** star
** File description:
** print_top
*/

void my_putchar(char c);

void my_putstr(char *str);

void print_top(int nb)
{
    int for_space = (3 * nb - 1);
    int after_space = 1;

    for (int i = 0; i != for_space; i++)
        my_putchar(' ');
    my_putstr("*\n");
    for_space--;
    for (int size = 0; size != nb - 1; size++) {
        for (int i = 0; i != for_space; i++)
            my_putchar(' ');
        my_putchar('*');
        for_space--;
        for (int j = 0; j != after_space; j++)
            my_putchar(' ');
        my_putstr("*\n");
        after_space += 2;
    }
}
