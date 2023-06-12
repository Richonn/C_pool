/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-leandre.cacarie
** File description:
** my_sort_int_array
*/

void check_value(int i, int *array, int temp)
{
    if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void my_sort_int_array(int *array, int size)
{
    int temp = 0;

    for (int stage = 0; stage < size - 1; stage++)
        for (int i = 0; i < (size - stage - 1); i++)
            check_value(i, array, temp);
}
