#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code
 * @h: ponter
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t _size_t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		_size_t++;
	}
	return (_size_t);
}
