#include <stdio.h>

/**
 * main- A function that prints the program's name
 * Return: the value of argc.
 * @argc: argument count
 * @argv: argument vector
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
