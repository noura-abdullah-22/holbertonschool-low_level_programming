#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}

	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');

	return (0);
}
