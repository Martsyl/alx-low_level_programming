#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: pointer.
 * @size: size of the array.
 * @action: ponter func.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
