/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** get nb of a string
*/
int my_strlen(char const *str);

int is_neg(char const *str)
{
    int i = 0;
    int neg = 0;
    while (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == '-'){
            neg++;
        }
        i++;
    }
    return (neg);
}

int loop_test(int i, char const *str, int res)
{
    int t = str[i] - 48;
    res = res * 10 + t;
    i++;
    if (i == length) {
        if (neg % 2 == 1){
            res = res * (-1);
        }
        if (res < 2147483647 && res > -2147483648) {
            return (res);
        }
    }
}
int my_getnbr(char const *str)
{
    int length = my_strlen(str);
    int i = 0;
    int c = 0;
    long res = 0;
    int neg = is_neg(str);
    while (str[i] < 48 || str[i] > 57)
    {
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        loop_test(i, str, res);
        i++;
    }
    if (res < 2147483647 && res > -2147483648) {
        return (res);
    }
    return 0;
}
