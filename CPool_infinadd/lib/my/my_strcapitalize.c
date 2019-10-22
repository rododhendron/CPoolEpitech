/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** capitalize words
*/

char *my_strcapitalize(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i-1] == ' ' || i == 0) {
            if (str[i] > 96 && str[i] < 122) {
                str[i] = str[i] - 32;
            }
        } else if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}