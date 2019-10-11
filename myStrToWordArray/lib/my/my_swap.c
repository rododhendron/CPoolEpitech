/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swap int
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
