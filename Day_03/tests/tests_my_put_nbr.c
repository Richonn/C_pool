/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday03-leandre.cacarie
** File description:
** test_my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb);

int main(void)
{
    my_put_nbr(0);
    my_put_nbr(-2147483648);
    my_put_nbr(2147483647);
    my_put_nbr(-3456789);
    return 0;
}
