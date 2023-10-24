#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, sum, carry = 0;

    for (i = 0; n1[i] != '\0' || n2[i] != '\0' || carry; i++)
    {
        sum = carry;

        if (n1[i] != '\0')
            sum += n1[i] - '0';

        if (n2[i] != '\0')
            sum += n2[i] - '0';

        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    if (i >= size_r || i == 0)
        return (0);

    r[i] = '\0';

    for (i = 0, j = i; j < i / 2; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}
