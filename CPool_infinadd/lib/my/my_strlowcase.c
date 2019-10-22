/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** to upcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}