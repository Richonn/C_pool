/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday09-leandre.cacarie
** File description:
** swap_endian_color
*/

#include <stdint.h>

union swap_endian_color_u
{
    uint32_t color;
    uint8_t components[4];
};

int swap_endian_color(int color)
{
    union swap_endian_color_u convert = {color};

    if (convert.components[0] != convert.components[3]) {
        convert.components[0] = convert.components[0] ^ convert.components[3];
        convert.components[3] = convert.components[3] ^ convert.components[0];
        convert.components[0] = convert.components[0] ^ convert.components[3];
    }
    if (convert.components[1] != convert.components[2]) {
        convert.components[1] = convert.components[1] ^ convert.components[2];
        convert.components[2] = convert.components[2] ^ convert.components[1];
        convert.components[1] = convert.components[1] ^ convert.components[2];
    }

    return convert.color;
}
