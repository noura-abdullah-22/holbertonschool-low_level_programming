#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return (0) success
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
