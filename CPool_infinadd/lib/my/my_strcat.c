/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenate 2 strings
*/

#include "../../include/my.h"

int *my_strcat(char *dest, char const *src)
{
    int length_src = my_strlen(src);
    int length_dest = my_strlen(dest);
    int length_max = length_dest + length_src;
    char chaine[length_max];
    int i = 0;
    for (i; i < length_dest; i++)
    {
        chaine[i] = dest[i];
    }
    for (int j = 0; j < length_src; i++)
    {
        chaine[i] = src[j];
        j++;
    }
    chaine[i] = '\0';
    my_strcpy(dest, chaine);
    return (0);
}
