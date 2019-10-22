/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** show length str
*/

int my_strlen(char const *str)
{
    int res = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        res++;
        i++;
    }
    return (res);
}
