#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: a pointer to the modified string
 */
char *leet(char *str)
{
    char *leet_table = "aAeEoOtTlL";
    char *leet_replacement = "44370171";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leet_table[j] != '\0'; j++)
        {
            if (str[i] == leet_table[j])
            {
                str[i] = leet_replacement[j];
                break; // Exit the inner loop when a match is found
            }
        }
    }

    return str;
}
