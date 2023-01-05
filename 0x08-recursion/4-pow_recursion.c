#include "main.h"

/**
 * _pow_recursion - returns the raised value of x
 * @x: value to be raised
 * @y: power of x
 * Return: raised value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y > 0)
	{
		return (x * _pow_recursion(x, --y));
	}
	return (1);
}
