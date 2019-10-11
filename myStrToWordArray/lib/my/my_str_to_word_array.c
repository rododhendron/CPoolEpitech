/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** set table from string
*/

#include "../../include/my.h"
#include "../../include/macro.h"
#include <stdlib.h>

int *count_tab_size(char const *tab, int *count_tab)
{
    int rk = 0;
    int j = 0;
    int i = 0;
    while (tab[i] != 0) {
        if (IS_ALPHA(tab[i])) {
            j++;
        } else {
            if (IS_ALPHA(tab[i-1])) {
                count_tab[rk] = j;
                rk++;
                if (tab[i+1] != 0) {
                    j = 0;
                }
            }
        }
        i++;
    }
    count_tab[rk] = j;
    return (count_tab);
}

int count_line(char const *tab)
{
    int i = 0;
    int rk = 0;
    while (tab[i] != 0) {
        if (IS_ALPHA(tab[i])) {
        } else {
            if (IS_ALPHA(tab[i-1])) {
                rk++;
            }
        }
        i++;
    }
    return rk + 1;
}

void init_tab_char_2d(char **str, int n_tab_line, int *count_tab)
{
    for (int i = 0; i < n_tab_line; i++) {
        for (int j = 0; j < count_tab[i]; j ++) {
            str[i][j] = '\0';
        }
    }
}

char **fill_tab(char **str, char const *tab)
{
    int i = 0;
    int j = 0;
    int rk = 0;
    while (tab[i] != 0) {
        if (IS_ALPHA(tab[i])) {
            str[rk][j] = tab[i];
            j++;
        } else {
            if (IS_ALPHA(tab[i-1])) {
                rk++;
                j = 0;
            }
        }
        i++;
    }
}

char **my_str_to_word_array(char const *tab)
{
    int n_tab_line = count_line(tab);
    int count_tab[n_tab_line];
    count_tab_size(tab, count_tab);
    char **str = malloc(sizeof(char *) * (n_tab_line + 1));
    for (int z = 0; z < n_tab_line; z++) {
        str[z] = malloc(sizeof(char) * (count_tab[z] + 1));
    }
    str[n_tab_line] = 0;
    init_tab_char_2d(str, n_tab_line, count_tab);
    fill_tab(str, tab);
    return (str);
}
