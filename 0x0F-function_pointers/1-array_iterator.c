#include "function_pointers.h"

/**
 * array_iterator - executes afunction given as parameter
 * @size: size of array
 * @action: pointer to function
 * @array: pointer to array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size > 0)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
