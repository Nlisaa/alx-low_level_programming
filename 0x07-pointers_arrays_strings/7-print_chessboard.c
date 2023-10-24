#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_chessboard - Prints a chessboard
 * @a: 2D array of characters representing the chessboard
 *
 * Description: The chessboard is represented as an 8x8 grid
 */
void print_chessboard(char (*a)[8])
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}      
