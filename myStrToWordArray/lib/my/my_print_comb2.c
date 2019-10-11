/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** display digits combine two digits group
*/
int my_putchar(char c);
int my_sequence_char(char a, char b)
{
    my_putchar(a / 10 + 48);
    my_putchar(a % 10 + 48);
    my_putchar(' ');
    my_putchar(b / 10 + 48);
    my_putchar(b % 10 + 48);
}

int my_print_comb2(void)
{
    int a = 0;
    int b = 0;
    while (a < 100) {
        b = a + 1;
        while (b < 100) {
            my_sequence_char(a, b);
            if (a != 98) {
                my_putchar(',');
                my_putchar(' ');
            } else {
                if (b != 99) {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
            b++;
        }
        a++;
    }
return (0);
}
