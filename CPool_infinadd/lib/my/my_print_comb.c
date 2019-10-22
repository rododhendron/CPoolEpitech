/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** display digits combine
*/
void my_putchar(char c);

int three_char_equal(char a, char b, char c)
{
    if (a != b) {
        if (b != c) {
            if (c != a) {
                return (1);
            } else {
                return (0);
            }
        }
    }
}
void my_seqchar(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
}

void putchar_coma(void)
{
        my_putchar(',');
        my_putchar(' ');
}

void test_sequence(char a, char b, char c)
{
    if (three_char_equal(a, b, c)) {
        my_seqchar(a, b, c);
        if (a != '7') {
            putchar_coma();
        } else {
            if (b != '8') {
                putchar_coma();
            } else {
                if (c != '9') {
                    putchar_coma();
                }
            }
        }
    }
}
int my_print_comb(void)
{
char a = '0';
char b = '0';
char c = '0';
    for (a ; a <= '9'; a++) {
        b = a + 1;
        for (b ; b <= '9'; b++) {
            c = b + 1;
            for (c ; c <= '9'; c++) {
                test_sequence(a, b, c);
            }
        }
    }
    return (0);
}
