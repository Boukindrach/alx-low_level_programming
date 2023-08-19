#include <stdio.h>

/**
 * main- funcation that prints the number of arguments passed into it
 * Return: always 0
 * @argc: argument count
 * @argv: argument vector
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
