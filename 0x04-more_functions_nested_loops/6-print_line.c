#include "main.h"

/**
 * print_line - prints a straight line
 * _putchar - prints to stdout
 * @n: number of times to print character
 */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
