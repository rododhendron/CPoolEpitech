/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** is prime
*/

int my_is_prime(int nb)
{
    if (nb == 1 || nb == 0) {
        return (0);
    }
    int i = 2;
    while (i < nb)
    {
        if (nb % i == 0) {
            return (0);
        }
        i++;
    }
    return (1);
}
