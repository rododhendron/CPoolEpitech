/*
** EPITECH PROJECT, 2019
** macro.h
** File description:
** list of macro
*/

#define IS_LOWER(c) (c > 96 && c < 122)
#define IS_UPPER(c) (c > 64 && c < 91)
#define IS_ALPHA(c) IS_LOWER(c) || IS_UPPER(c)
#define IS_DIGITS(c) (c >= 48 || c <= 57)