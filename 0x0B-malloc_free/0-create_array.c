#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - is a function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: refers to the array size
 * @c: is the data type theat represents the array
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

