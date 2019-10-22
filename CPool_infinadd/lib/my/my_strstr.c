/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** 
*/
/*
char *my_strcpy(char *dest, char const *src);

int my_strlength(char const *str)
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

char *do_reschaine(int res, char *str, char const *to_find)
{
    int j = 0;
    int corr = 0;
    for (int i = 0; i < length; i++) {
        if (to_find[corr] == str[i]) {
            corr++;
        } else {
            corr = 0;
        }
        if (corr == to_find_length) {
            res = i;
        }
    }
    for (int i = res - (to_find_length - 1); i < length; i++) {
        res_chaine[j] = str[i];
        j++;
    }
}*/
char *my_strstr(char *str, char const *to_find)
{/*
    int length = my_strlength(str);
    int to_find_length = my_strlength(to_find);
    int res = 0;
    char res_chaine[length];
    res_chaine = do_reschaine(res, str, to_find);
    return (my_strcpy(str, res_chaine));
*/
    return 0;
}
