#include "main.h"

/**
 * cap_string - take strings and capitalize words
 * @a: string to capitalize
 * Return: capitalized words
 */

char *cap_string(char *a)
{
	int i, j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == a[i] && (a[i + 1] >= 97 && a[i + 1] <=122))
			{
				a[i + 1] = a[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (a);
}
