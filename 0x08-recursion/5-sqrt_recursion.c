#include "main.h"

/**
 * _sqrt_recursion - returns squareroot of number
 * @n: number to find its squareroot
 * Return: squareroot of number
 */

int _sqrt_recursion(int n)
{
	int i, result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	i = 1;

	result = _find_sqrt(n, i);

	return (result);
}

/**
 * _find_sqrt - helps sqrt function find sqrt
 * @n: number to be sqrtd
 * @i: sqrt of n
 * Return: natural sqrt of n
 */

int _find_sqrt(int n, int i)
{
	if (i > n / 2)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_find_sqrt(n, i + 1));
}
