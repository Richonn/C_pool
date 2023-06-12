/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-leandre.cacarie
** File description:
** my_strncmp
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len_1 = my_strlen(s1);
    int len_2 = my_strlen(s2);

    for (int i = 0; i < n; i++) {
        if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
        if (s2[i] < s1[i])
            return (s2[i] + s1[i]);
    }
    return 0;
}
