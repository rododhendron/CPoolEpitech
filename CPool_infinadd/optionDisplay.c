/*
** EPITECH PROJECT, 2019
** optionDisplay
** File description:
** display
*/

#include <my.h>
void printNeg(char *res_chaine, int len, int is_neg_nb1, int is_neg_nb2)
{
    if (res_chaine[0] == '-') {
        int i = 1;
        my_putchar(res_chaine[0]);
        while(res_chaine[i] == '0') {
            i++;
        }
        for (i; i <= len; i ++) {
            my_putchar(res_chaine[i]);
        }
        my_putchar('\n');
    } else {
        int i = 1;
        while(res_chaine[i] == '0') {
            i++;
        }
        if (i > len)
            my_putchar('0');
        for (i; i <= len; i ++) {
            my_putchar(res_chaine[i]);
        }
        my_putchar('\n');
    }
}

void printnb(char *res_chaine, int len, int is_neg_nb1, int is_neg_nb2)
{
    if (is_neg_nb1 == 1 || is_neg_nb2 == 1) {
        printNeg(res_chaine, len, is_neg_nb1, is_neg_nb2);
    } else {
        if (res_chaine[0] != '0')
            my_putchar(res_chaine[0]);
        for (int i = 1; i <= len; i ++) {
            my_putchar(res_chaine[i]);
        }
        my_putchar('\n');
    }
}
