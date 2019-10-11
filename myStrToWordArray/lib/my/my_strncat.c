/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenate 2 strings n of src
*/

#include "../../include/my.h"

int *my_strncat(char *dest, char const *src, int n)
{
    int length_src = my_strlen(src);
    int length_dest = my_strlen(dest);
    int length_max = length_dest + length_src+1;
    char chaine[length_max];
    int i = 0;
    while (dest[i] != '\0') {
        chaine[i] = dest[i];
        i++;
    }
    for (int j = 0; j < n - 1 ; i++)
    {
        chaine[i] = src[j];
        j++;
    }
    chaine[i] = '\0';
    my_strcpy(dest, chaine);
    return (0);
}
