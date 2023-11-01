#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0
*/

int main(void)
{
	int i, j, z;

	for (i = 0; i <= 7; i++)
		for (j = i + 1; j <= 8; j++)
			for (z = j + 1; z <= 9; z++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + z);
				if (i != 7 || j != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
