#include <stdio.h>

/**
 * print_menu - prints the calculator menu
 *
 * Return: void
 */
void print_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * read_operands - reads the two numbers A and B from the user
 * @a: pointer to store the first number
 * @b: pointer to store the second number
 *
 * Return: 1 on success, 0 on failure
 */
int read_operands(double *a, double *b)
{
	printf("A: ");
	if (scanf("%lf", a) != 1)
		return (0);
	printf("B: ");
	if (scanf("%lf", b) != 1)
		return (0);
	return (1);
}

/**
 * main - runs an interactive menu-driven calculator
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	double a;
	double b;

	printf("Simple Calculator\n");
	while (1)
	{
		print_menu();
		if (scanf("%d", &choice) != 1)
			return (1);
		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}
		if (!read_operands(&a, &b))
			return (1);
		if (choice == 1)
			printf("Result: %g\n", a + b);
		else if (choice == 2)
			printf("Result: %g\n", a - b);
		else if (choice == 3)
			printf("Result: %g\n", a * b);
		else if (b == 0)
			printf("Error: division by zero\n");
		else
			printf("Result: %g\n", a / b);
	}
	return (0);
}
