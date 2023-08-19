#include <stdio.h>
#include <stdlib.h>

/**
 * main- a function that multiplies two numbers.
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 with less than two arguments, 0 if it's more than two
*/
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int c = i * j;

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
