/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** reverse alphabet
*/

int my_putchar(char c);
int my_print_revalpha(void)
{
    char character;
    character = 'z';
    while (character >= 'a')
    {
        my_putchar(character);
        character--;
    }
    return (0);
}
