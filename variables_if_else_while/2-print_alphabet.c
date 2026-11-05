#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0(success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
