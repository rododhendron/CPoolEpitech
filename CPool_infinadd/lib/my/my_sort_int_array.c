/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** sort an array
*/
void my_swap(int *a, int *b);
void my_sort_int_array(int *array, int size)
{
    int j = 0;
    int i = 0;
    for (j = 1; j < size; j++)
        {
            for (i = 1; i < size; i++)
            {
                if (array[i-1] > array[i]) {
                    my_swap(&array[i-1], &array[i]);
                }
            }
        }

}
