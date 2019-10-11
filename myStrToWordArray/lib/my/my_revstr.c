/*
** EPITECH PROJECT, 2019
** my_rev_str
** File description:
** reverse strin
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

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char chaine[length];
    int i = 0;
    for (i = 0; i < length; i++) {
        chaine[i] = str[length - i - 1];
    }
    for (i = 0; i < length; i++) {
        str[i] = chaine[i];
    }
    return str;
}