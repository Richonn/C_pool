/*
** EPITECH PROJECT, 2022
** star
** File description:
** print_in_between
*/

void my_putchar(char c);

void my_putstr(char *str);

void print_inside(int nb)
{
    int for_space = 1;
    int after_space = (6 * nb) - 5;

    for (int size = 0; size != nb; size++) {
        for (int i = 0; i != for_space; i++)
            my_putchar(' ');
        my_putchar('*');
        for_space++;
        for (int j = 0; j != after_space; j++)
            my_putchar(' ');
        my_putstr("*\n");
        after_space -= 2;
    }
}

void print_inside_bot(int nb)
{
    int for_space = nb - 1;
    int after_space = (4 * nb) - 1;

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
