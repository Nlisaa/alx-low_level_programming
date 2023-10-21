#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are identical, a negative value if s1 is less than s2,
 * and a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    return s1[i] - s2[i];
}
