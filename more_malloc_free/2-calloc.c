#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: the number of elements
 * @size: the size of each element in bytes
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > UINT_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
