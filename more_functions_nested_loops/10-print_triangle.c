#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 1;
	while (row <= size)
	{
		i = 0;
		while (i < size - row)
		{
			_putchar(' ');
			i++;
		}
		i = 0;
		while (i < row)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		row++;
	}
}
