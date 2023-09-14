#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if 'c' is a digit, 0 otherwise.
*/

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_to_int - Convert a string of digits to an integer
 * @str: The input string to convert
 * Return: The integer value of the string
*/

int str_to_int(char *str)
{
	int result = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_digit(str[i]))
		{
			printf("Error\n");
			exit(98);
		}

		result = result * 10 + (str[i] - '0');
	}
	return (result);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
