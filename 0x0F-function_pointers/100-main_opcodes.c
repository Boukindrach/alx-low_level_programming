#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *array = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}

	printf("%02hhx ", array[i]);

	}

	return (0);
}
