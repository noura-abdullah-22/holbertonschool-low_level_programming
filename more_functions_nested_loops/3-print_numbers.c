#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
