#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: size of bytes
 * Return: newly allocated space in memory
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	char *result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	char *dest = result;

	while (*s1)
	{
		*dest = *s1;
		dest++;
		s1++;
	}

	while (n > 0)
	{
		*dest = *s2;
		dest++;
		s2++;
		n--;
	}

	*dest = '\0';
	return (result);
}
