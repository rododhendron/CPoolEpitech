/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** show one word per line from array
*/
#include "../../include/my.h"
#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    int t = 0;
    while (tab[t] != 0) {
        t++;
    }
    char *str = malloc(sizeof(char) * (t));
    int i = 0;
    while (i < t) {
        my_strcat(str, tab[i]);
        my_strcat(str, "\n");
        i++;
    }
    my_putstr(str);
    return (0);
}
