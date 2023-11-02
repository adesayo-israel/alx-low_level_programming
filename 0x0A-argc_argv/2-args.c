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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
