#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: contains the number of arguments passed to the program
 * @argv: contains a one-dimensional array of strings
 *
 * Return: 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;
	int j;

	while (i < argc)
	{
		j = i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
