/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** return smallest prime
*/
int my_is_prime(int nb);
int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1) {
        return (nb);
    } else {
        return (my_find_prime_sup(nb + 1));
    }
}
