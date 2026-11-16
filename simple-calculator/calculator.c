#include <stdio.h>

/**
 * clear_input - discards the rest of the current input line
 *
 * Return: void
 */
void clear_input(void)
{
	int ret;

	ret = scanf("%*[^\n]");
	ret = scanf("%*c");
	(void)ret;
}

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
 * read_number - asks for a number until a valid one is entered
 * @prompt: the text to show before reading
 * @n: pointer to store the number
 *
 * Return: 1 on success, 0 if the input has ended
 */
int read_number(char *prompt, double *n)
{
	int ret;

	while (1)
	{
		printf("%s", prompt);
		ret = scanf("%lf", n);
		if (ret == 1)
			return (1);
		if (ret == EOF)
			return (0);
		printf("Invalid number\n");
		clear_input();
	}
}

/**
 * calculate - performs the operation chosen by the user
 * @choice: the menu option (1 to 4)
 * @a: the first number
 * @b: the second number
 *
 * Return: void
 */
void calculate(int choice, double a, double b)
{
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

/**
 * main - runs an interactive menu-driven calculator
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	int ret;
	double a;
	double b;

	printf("Simple Calculator\n");
	while (1)
	{
		print_menu();
		ret = scanf("%d", &choice);
		if (ret == EOF)
			break;
		if (ret != 1)
		{
			printf("Invalid choice\n");
			clear_input();
			continue;
		}
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
		if (!read_number("A: ", &a) || !read_number("B: ", &b))
			break;
		calculate(choice, a, b);
	}
	return (0);
}
