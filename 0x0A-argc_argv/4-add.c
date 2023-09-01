#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if there is a symbols that is not digits, 0 otherwise
*/

int main(int argc, char *argv[])
{
	int i = 1, j = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}

			j = atoi(argv[i]) + j;
		}
		printf("%d\n", j);
	}
	return (0);
}
