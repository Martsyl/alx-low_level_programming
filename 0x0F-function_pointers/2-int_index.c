#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: size of the array.
 * @cmp: pointer to a function.
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
