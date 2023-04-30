#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint- check the code
 * @head: head pointer
 * @n: num
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeat_begining;

	nodeat_begining = malloc(sizeof(listint_t));

	if (!nodeat_begining)
	{
		return (NULL);
	}
	nodeat_begining->n = n;
	nodeat_begining->next = *head;
	*head = nodeat_begining;
	return (nodeat_begining);

}
