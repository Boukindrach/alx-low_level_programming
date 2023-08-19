#include <stdio.h>
#include <string.h>

/**
 * main- prints all arguments it receives.
 * Return: always 0
 * @argc: argument count
 * @argv: argument vector
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
