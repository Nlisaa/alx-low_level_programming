#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: set of bytes to be searched for
 *
 * Return: the number of bytes in the initial segment of s that consist
 * of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
