#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h: header
 */
size_t listint_len(const listint_t *h)
{
	size_t num1 = 0;

	while(h != NULL)
	{
		num1++;
		h = h->next;
	}
	return (num1);
}
