#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: contains the number of arguments passed to the program
 * @argv: contains a one-dimensional array of strings
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", i);
	}
	return (0);
}
