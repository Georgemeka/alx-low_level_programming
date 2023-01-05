#include "main.h"

/**
 * factorial - returns the factorial of ag iven number
 * @n: number to find factorial of
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
