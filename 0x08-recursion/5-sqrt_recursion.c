#include "main.h"

int _sqrt_recursion_2(int n, int i);

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: the tested number
 * Return: the square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_2(n, 0));
}

/**
 * _sqrt_recursion_2- function to find the natural square root
 * @n: the tested number
 * @i: iterator
 * Return: the square root
*/

int _sqrt_recursion_2(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_2(n, i + 1));
}
