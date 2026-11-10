#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer dest
 * @dest: the buffer to copy the string into
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
