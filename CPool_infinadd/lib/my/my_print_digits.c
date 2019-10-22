/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** display digits
*/

int my_putchar(char c);
int my_print_digits(void)
{
    char digit;
    digit = '0';
    while (digit <= '9')
    {
        my_putchar(digit);
        digit++;
    }
    return (0);
}
