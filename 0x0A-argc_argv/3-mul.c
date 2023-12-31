#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if we got less than 2 numbers, otherwise 0
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]), j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
