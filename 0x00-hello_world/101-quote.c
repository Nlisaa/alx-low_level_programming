#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	ssize_t written = write(2, message, len);

	if (written == len)
		return (1);
	else
		return (0);
}

