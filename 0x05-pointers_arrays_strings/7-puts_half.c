#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
    int length = 0;
    int half_length;
    int i;

    while (str[length] != '\0')
    {
        length++;
    }

    half_length = (length + 1) / 2;

    for (i = half_length; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
