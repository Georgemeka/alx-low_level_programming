#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of function
 * @size: size of array
 * @cmp: function pointer
 * Return: i or -1 if null
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}

