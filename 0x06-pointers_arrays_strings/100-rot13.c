#include "main.h"

/**
 * rot13 - encodes string
 * @str: string to be encoded
 * Return: encoded string.
 */

char *rot13(char *str)
{
	int i, j;

char alpha[] = "ABCDEFGHIJKLMN0PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

