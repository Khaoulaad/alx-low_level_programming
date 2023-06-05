#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node in the head of an LL
 * @head: head of the linked list
 * @n: data of node
 * Return: number of new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newfirstnode;

	newfirstnode = malloc(sizeof(listint_t));
	if (newfirstnode != NULL)
	{
		newfirstnode->n = n;
		newfirstnode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newfirstnode->next = *head;
	*head = newfirstnode;
	return (newfirstnode);
}
