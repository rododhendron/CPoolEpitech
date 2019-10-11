/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copie la chaine de source
*/
int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int length = my_strlen(src);
    int i = 0;
    for (i = 0; i < length; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}