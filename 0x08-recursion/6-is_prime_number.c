#include "main.h"

int is_prime_number_2(int n, int i);

/**
 * is_prime_number- returns 1 if the input integer is a prime number
 * @n: the input integer
 * Return: 1 if n is a prime number or 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (is_prime_number_2(n, 2));
}

/**
 * is_prime_number_2- checks of n is a prime number or not
 * @n: the input integer
 * @i: iterator
 * Return: 1 if n is a prime number or 0 otherwise
*/

int is_prime_number_2(int n, int i)
{
	if (i == n - 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_number_2(n, i + 1));
}
