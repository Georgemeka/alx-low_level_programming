#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: decimal/int equivalent of binary
 * Or 0, if parameter b is null or has a non-binary digit
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	int length = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
