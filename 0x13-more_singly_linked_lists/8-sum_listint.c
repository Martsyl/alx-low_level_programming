#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: pointer
 * Return: sum of n.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;

	int sum_of_n = 0;

	while (tmp)
	{
		sum_of_n += tmp->n;
		tmp = tmp->next;
	}
	return (sum_of_n);
}
