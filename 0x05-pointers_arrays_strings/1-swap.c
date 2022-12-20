#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable a
 * @b: variable b
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
