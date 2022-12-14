#include "main.h"

/**
 * _islower - function to check for lower case
 *
 * @c: variable to determine if input is lowercase
 * main - uses built in function
 *
 * Return: 1 if lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	return (0);
}
