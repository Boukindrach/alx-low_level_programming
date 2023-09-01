#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: The integer to be checked
 * Return: the value of a number or 0
*/
int _abs(int i)
{
	if (i < 0)
	{
		int abs_value;

		abs_value = i * -1;
		return (abs_value);
	}
	return (i);
}
