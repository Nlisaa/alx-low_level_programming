#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    for (i = 0; i < 52; i++)
    {
        putchar(alph[i]);
    }

    putchar('\n'); // Use '\n' instead of "/n"

    return (0); // Add a missing semicolon after return statement
}
