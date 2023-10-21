#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: the input string
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalize = 1; // A flag to track whether the next character should be capitalized

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            capitalize = 1;
        }
        else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert the first character of the word to uppercase
            capitalize = 0;      // Reset the flag
        }
        else
        {
            capitalize = 0; // Do not capitalize
        }
        i++;
    }

    return str;
}
