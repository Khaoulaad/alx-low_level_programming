#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node in the end LL
 * @head: head of the linked list
 * @n: data of node
 * Return: number of new element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlastnode;
	listint_t *current = *head;

	newlastnode = malloc(sizeof(listint_t));
	if (newlastnode != NULL)
	{
		newlastnode->n = n;
		newlastnode->next = NULL;
	}
	else
		return (NULL);
	if (current != NULL)
	{
		while (current->next != NULL)
		current = current->next;
	current->next = newlastnode;
	}
	else
		*head = newlastnode;
	return (newlastnode);
}
