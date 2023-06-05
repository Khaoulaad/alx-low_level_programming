#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - delete first node
 * @head: head of the LL
 * Return: content
 */
int pop_listint(listint_t **head)
{
	int content;
	listint_t *firsttobedeleted;

	if (*head == NULL)
		return (0);

	firsttobedeleted = *head;
	content = (*head)->n;
	*head = (*head)->next;
	free(firsttobedeleted);

	return (content);
}
