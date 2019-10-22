/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** rec factorial
*/

int my_compute_square_root(int nb)
{
    int res = 0;
    if (nb == 0) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    int i = 0;
    while (res < nb)
    {
        i++;
        res = i * i;
    }
    if (res == nb) {
        return (i);
    }
    return (0);
}
