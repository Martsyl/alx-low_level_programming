#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: pointer
 * @index: num to be assigned
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *last = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	last = tmp->next;
	tmp->next = last->next;
	free(last);
	return (1);
}
