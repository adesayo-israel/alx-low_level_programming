#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - is a function that duplicates strings
 *
 * @str: represnts the string to be duplicated
 *
 * Return: New String (s)
 */

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[l] != '\0')
		l++;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
