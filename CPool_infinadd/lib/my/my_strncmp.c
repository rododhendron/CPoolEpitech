/*
** EPITECH PROJECT, 2019
** environnementTest
** File description:
** compare n char
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int ret = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n) {
        if (s1[i] > s2[i]) {
            ret = 1;
        } else if (s1[i] < s2[i]) {
            ret = -1;
        }
        i++;
    }
    return (ret);
}