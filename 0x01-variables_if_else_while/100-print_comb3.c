#include <stdio.h>
/**
 * main -Entry Point
 * Return: always 0
*/
int main(void)
{
	int a, i;

	for (a = '0'; a < '9' ; a++)
	{
	for (i = a + 1; i <= '9'; i++)
	{
	if (a != i)
	{
	putchar(a);
	putchar(i);
	if (a == '8' && i == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
