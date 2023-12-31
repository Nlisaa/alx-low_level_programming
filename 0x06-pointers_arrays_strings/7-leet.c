#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Input string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        switch (str[i])
        {
            case 'a':
            case 'A':
                str[i] = '4';
                break;
            case 'e':
            case 'E':
                str[i] = '3';
                break;
            case 'o':
            case 'O':
                str[i] = '0';
                break;
            case 't':
            case 'T':
                str[i] = '7';
                break;
            case 'l':
            case 'L':
                str[i] = '1';
                break;
            default:
                break;
        }
        i++;
    }
    return (str);
}
