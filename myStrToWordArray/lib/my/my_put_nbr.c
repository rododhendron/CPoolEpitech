/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display nbr
*/
#include <unistd.h>
int my_putchar(char c);
int my_pwr(int in, int p)
{
    int i = 0;
    int res = 1;
    for (i = 1; i < p; i++)
    {
        res = res * in;
    }
    return (res);
}

int is_pos(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    return (nb);
}

int cut_nb(int nb)
{
    char display = '0';
    int p = 10;
    int rk = 10;
    nb = is_pos(nb);
    for (p = 10; p > 0; p--)
    {
        display = nb / my_pwr(10, p);
        nb = nb % my_pwr(10, p);
        if (display == 0) {
            if (rk != p) {
                my_putchar(display + 48);
            }
            rk--;
        } else {
            my_putchar(display + 48);
        }
    }
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483647) {
        write(1, "-2147483647", 11);
        return (0);
    } else {
        cut_nb(nb);
        return (0);
    }
}
