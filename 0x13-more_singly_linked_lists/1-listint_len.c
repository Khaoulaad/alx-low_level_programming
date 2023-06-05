#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - length of a linked list
 * @h: head ofthe linke dlist
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t numberofnodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		numberofnodes += 1;
		current = current->next;
	}
	return (numberofnodes);
}
