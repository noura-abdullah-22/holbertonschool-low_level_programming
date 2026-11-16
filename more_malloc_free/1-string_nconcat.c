#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to use
 *
 * Return: a pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
