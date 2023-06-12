/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** get_color
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;

    color = (red);
    color <<= 8;
    color |= (green);
    color <<= 8;
    color |= (blue);
    return color;
}
