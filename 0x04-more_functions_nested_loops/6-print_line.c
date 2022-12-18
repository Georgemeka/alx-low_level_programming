#include "main.h"

/**
 * print_line - prints a straight line
 * _putchar - prints to stdout
 * @n: number of times to print character
 */

void print_line(int n)
{
	char c = '_';
	int i;

	if (n > 0)
	for (i = 0; i < n; n++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
