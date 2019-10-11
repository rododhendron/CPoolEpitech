/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Display alphabet
*/

int my_putchar(char c);
int my_print_alpha(void)
{
    char character;
    character = 'a';
    while (character <= 'z')
    {
        my_putchar(character);
        character++;
    }
    return (0);
}
