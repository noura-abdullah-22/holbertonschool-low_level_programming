#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return (0) success
 */
int main(void)
{
	char Letter = 'a';

	while (Letter <= 'z')
	{
		if (Letter != 'e' && Letter != 'q')
			putchar(Letter);
		Letter++;
	}

	putchar('\n');

	return (0);
}
