/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday12-leandre.cacarie
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int my_cat(int ac, char **av)
{
    int fd;
    char buffer[32];
    int a;

    if (ac < 2)
        while (1) {
            a = read(0, buffer, 32);
            write(1, buffer, a);
        }
    for (int j = 1; j < ac; j++) {
        fd = open(av[j], O_RDONLY);
        for (int i = 0; (fd != -1) && (i = read(fd, buffer, 32)) > 0;)
            write(1, buffer, i);
        close(fd);
    }
    return 0;
}

int main(int ac, char **av)
{
    my_cat(ac, av);
    return 0;
}
