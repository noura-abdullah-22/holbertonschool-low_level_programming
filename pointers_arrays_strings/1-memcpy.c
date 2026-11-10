#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the memory area to copy to
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
