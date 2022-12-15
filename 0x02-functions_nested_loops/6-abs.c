#include "main.h"
#include "stdio.h"

/**
 * int _abs - function that computes absolute value of integer
 *
 * @c: variable inputed into int_abs function
 *
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
