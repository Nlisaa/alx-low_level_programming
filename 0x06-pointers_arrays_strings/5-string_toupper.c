#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase in a string
 * @str: the input string
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
        i++;
    }

    return str;
}
