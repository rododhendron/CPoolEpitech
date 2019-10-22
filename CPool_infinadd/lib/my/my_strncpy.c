/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copy n character 
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (i = 0; i < n || src[i] != '\0'; i++) {
        if (i >= n) {
            dest[i] = '\0';
        } else {
            dest[i] = src[i];
        }
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}