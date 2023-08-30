#include "main.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: number
 * @y: power of the x number
 * Return: -1, 1 or value of number x after getting raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
