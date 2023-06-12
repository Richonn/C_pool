/*
** EPITECH PROJECT, 2022
** star
** File description:
** star
*/

void my_putstr(char *str);

void print_top(int nb);

void print_bot(int nb);

void print_body(int nb);

void star_one(void);

void star_two(void);

void print_inside(int nb);

void print_inside_bot(int nb);

void star(unsigned int size)
{
    if (size <= 0)
        return;
    if (size == 1)
        star_one();
    else if (size == 2)
        star_two();
    else {
        print_top(size);
        print_body(size);
        print_inside(size);
        print_inside_bot(size);
        print_body(size);
        print_bot(size);
    }
}
