/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** check is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int check = 1;
    while (str[i] != '\0') {
        if (str[i] <= 'A' && str[i] >= 'Z') {
            check = 0;
        }
        i++;
    }
    return check;
}