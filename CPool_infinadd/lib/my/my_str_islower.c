/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** check is lower
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int check = 1;
    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            check = 0;
        }
        i++;
    }
    return check;
}