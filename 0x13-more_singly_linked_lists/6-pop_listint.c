#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @head: to be deleted
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int q;

	if (*head == NULL)
	{
		return (0);
	}
	q = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;

	return (q);
}

