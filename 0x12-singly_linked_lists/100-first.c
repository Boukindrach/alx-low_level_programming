#include <stdio.h>

void i_am_first(void) __attribute__((constructor));

/**
 * i_am_first- prints before main
*/

void i_am_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
