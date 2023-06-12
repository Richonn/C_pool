/*
** EPITECH PROJECT, 2022
** star
** File description:
** print_bot
*/

void my_putchar(char c);

void my_putstr(char *str);

void print_bot(int nb)
{
    int for_space = 2 * nb;
    int after_space = nb;

    for (int size = 0; size != nb - 1; size++) {
        for (int i = 0; i != for_space; i++)
            my_putchar(' ');
        my_putchar('*');
        for_space++;
        for (int j = 0; j != after_space + nb - 3; j++)
            my_putchar(' ');
        my_putstr("*\n");
        after_space -= 2;
    }
    for (int i = 0; i != 3 * nb - 1; i++)
        my_putchar(' ');
    my_putstr("*\n");
}
