#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: holds value for number of bytes allocated
 *
 * Return: poiter to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;
	*ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
