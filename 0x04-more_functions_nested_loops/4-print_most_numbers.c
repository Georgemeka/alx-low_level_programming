#include "main.h"

/**
 * print_most_numbers - print most numbers
 * _putchar - prints character to stdout
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;

		_putchar(i);
	}
	_putchar('\n');
}

