/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** check alpha char
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int check = 1;
    while (str[i] != '\0') {
        if ((str[i] > 96 && str[i] < 122) || (str[i] > 64 && str[i] < 91)) {
        } else {
            check = 0;
        }
        i++;
    }
    return check;
}