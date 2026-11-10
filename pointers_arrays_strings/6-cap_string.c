#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char *sep = " \t\n,;.!?\"(){}";
	int i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' &&
		    (i == 0 || is_separator(s[i - 1])))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
