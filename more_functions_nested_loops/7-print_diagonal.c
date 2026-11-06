#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	line = 0;
	while (line < n)
	{
		space = 0;
		while (space < line)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}
