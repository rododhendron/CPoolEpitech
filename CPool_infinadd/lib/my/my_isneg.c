/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** display p if positive or null else n
*/
int my_putchar(char c);
int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
