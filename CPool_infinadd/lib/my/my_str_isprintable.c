/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** check is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int check =1;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 126) {
            check = 0;
        }
        i++;
    }
    return check;
}