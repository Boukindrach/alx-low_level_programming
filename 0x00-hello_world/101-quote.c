#include <unistd.h>
/**
 * main - Entry point
 *
 * return: it's 1 this time
*/
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, sizeof(quote));

	return (1);
}
