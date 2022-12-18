#include "main.h"

/**
 * print_square - prints a square
 * _putchar - prints to stdout
 * @size: size of square
 */

void print_square(int size)
{
	int i;
	int z;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (z = 0; z < size; z++)
			_putchar('#');
		_putchar('\n');
	}
}
