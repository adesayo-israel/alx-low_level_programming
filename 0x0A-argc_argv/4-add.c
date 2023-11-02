#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * check - checks for number
 *
 * @no: represnt the string
 * Return: 0 when string contains number and
 * 1 when string doesn't have a number
*/

int check(char no[])
{
	int i;
	int j = strlen(no);

	for (i = 0; i < j; i++)
	{
		if (!isdigit(no[i]))
			return (j);
	}
	return (0);
}


/**
 * main - a program that adds positive numbers.
 *
 * @argc: contains the number of arguments passed to the program
 * @argv: contains a one-dimensional array of strings
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int total;

	if (argc == j)
	{
		printf("0\n");
	}
	else
	{
		total = 0;
		for (i = 1; i < argc; i++)
		{
			if (check(argv[i]) == 0)
			{
				total += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (j);
			}
		}
		printf("%d\n", total);
	}
	return (0);
}
