#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row;
	int col;
	int product;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			product = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
			if (product >= 10)
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
