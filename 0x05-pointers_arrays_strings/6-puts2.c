#include "main.h"

/**
 * puts2 - prints every other character out of two starting with the first character
 * @str: input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
