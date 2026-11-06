#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return (0) success
 */
int main(void)
{
	int num = 0;
	char l = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
