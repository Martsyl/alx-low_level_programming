#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: head pointer
 * @n: num
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeat_end;
	listint_t *temp;

	nodeat_end = malloc(sizeof(listint_t));

	if (!nodeat_end)
	{
		return (NULL);
	}

	nodeat_end->n = n;
	nodeat_end->next = NULL;

	if (*head == NULL)
	{
		*head = nodeat_end;
		return (nodeat_end);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nodeat_end;
	return (nodeat_end);

}
