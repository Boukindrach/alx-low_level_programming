#include <stdio.h>
/**
 * main -Entry Point
 * Return: always 0
*/
int main(void)
{
	char c;
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
