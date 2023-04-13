#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *arr_range;
	int i;

	if (min > max)
		return (NULL);
	arr_range = malloc(sizeof(*arr_range) * ((max - min) + 1));
	if (arr_range == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr_range[i] = min;
	return (arr_range);
}
