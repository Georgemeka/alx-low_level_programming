#include "main.h"

/**
 * rev_string - function that reverses as tring
 * @s: string variable
 * _putchar - prints to stdout
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}

