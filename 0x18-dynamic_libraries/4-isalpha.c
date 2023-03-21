#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter
 *
 * @c: is a variable that is inputed into isalpha function
 *
 * main - built in function
 *
 * Return: 1 if c is a letter, and 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
