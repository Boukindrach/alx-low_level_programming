#include <stdio.h>
/**
 * main -Entry Point
 * Return: always 0
*/

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
