#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return (0) success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
