/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** add infinite numbers
*/

#include <my.h>
#include <stdlib.h>
void printnb(char *res_chaine, int len, int is_neg_nb1, int is_neg_nb2);

void *init_str(char *res_chaine, int max_len)
{
    for (int i = 0; i <= max_len + 1; i++) {
        res_chaine[i] = 0;
    }
    return res_chaine;
}

char check_dec_get(char c, int* temp_nb)
{
    if (c > 57) {
        *temp_nb = 1;
        c = c - 10;
    } else {
        *temp_nb = 0;
    }
    return c;
}

void *fill_str_with_char(char *nb2, char c, int length)
{
    char *temp_str = malloc(sizeof(char) * (length + 1));
    int sm_len = my_strlen(nb2) + 1;
    int nb_c = length - sm_len;
    int j = 0;
    int i = 0;
    if (nb2[0] == '-') {
        i = 1;
        nb_c++;
        j = 1;
        temp_str[0] = '-';
    }
    for (i; i <= nb_c; i++) {
        temp_str[i] = c;
    }
    for (i; i < length; i++) {
        temp_str[i] = nb2[j];
        j++;
    }
    temp_str[i] = 0;
    nb2 = temp_str;
    return nb2;
}

void *addition_str(char *nb1, char *nb2, char *res_chaine, int max_len)
{
    int temp_nb = 0;
    int i = my_strlen(nb1) - 1;
    int j = my_strlen(nb2) - 1;
    int u = max_len;
    for (u = max_len; u > 0; u--) {
        if (nb1[i] == '-') {
            res_chaine[u] = temp_nb + 48;
        } else {
            res_chaine[u] = nb1[i] + nb2[j] - 48 + temp_nb;
        }
        res_chaine[u] = check_dec_get(res_chaine[u], &temp_nb);
        i--;
        j--;
    }
    res_chaine[u] = temp_nb + 48;
    return res_chaine;
}

void *neg_nb(char *nb, int nb_len)
{
    if (nb[0] == '-') {
        nb[0] = '9';
    } else if (nb[0] == '0'){
        nb[0] = '-';
    }
    for (int i = 1; i <= nb_len; i++) {
        nb[i] = (9 - (nb[i] - 48)) + 48;
    }
    nb[nb_len]++;
    return nb;
}

void add_infin_nb(char *nb1, char *nb2)
{
    int is_neg_nb1 = 0;
    int is_neg_nb2 = 0;
    int i = my_strlen(nb1) - 1;
    int j = my_strlen(nb2) - 1;
    int max_len = 0;
    if (i > j) {
        max_len = i + 1;
        nb2 = fill_str_with_char(nb2, '0', max_len);
    } else {
        max_len = j + 1;
        nb1 = fill_str_with_char(nb1, '0', max_len);
    }
    if (nb1[0] == '-')
        is_neg_nb1 = 1;
    if (nb2[0] == '-')
        is_neg_nb2 = 1;
    int isneg = is_neg_nb1 + is_neg_nb2;
    if (isneg == 1) {
        if (nb1[0] == '-')
            nb1 = neg_nb(nb1, max_len - 1);
        if (nb2[0] == '-')
            nb2 = neg_nb(nb2, max_len - 1);
    }
    char res_chaine[max_len + 2];
    init_str(res_chaine, max_len);
    addition_str(nb1, nb2, res_chaine, max_len);
    int temp = 0;
    if (isneg == 1 && res_chaine[0] == 48) {
        neg_nb(res_chaine, max_len);
        int count;
        for (count = max_len; count > 0; count--) {
            if (res_chaine[count] > 57) {
                temp = 1;
                res_chaine[count] = res_chaine[count] - 10;
            } else {
                temp = 0;
            }
            res_chaine[count - 1] = res_chaine[count - 1] + temp;
        }
        //res_chaine[count] = res_chaine[count] + temp;
    }
    printnb(res_chaine, max_len, is_neg_nb1, is_neg_nb2);
}