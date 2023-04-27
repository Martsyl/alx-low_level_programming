#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: pointer
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t get_len = 0;

	while (h)
	{
		get_len++;
		h = h->next;
	}
	return (get_len);
}
