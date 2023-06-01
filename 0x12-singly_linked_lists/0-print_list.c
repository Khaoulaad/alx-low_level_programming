#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t numberofnodes = 0;

	while (current != NULL)
{
	if (current->str != NULL)
		printf("[%d] %s\n", current->len, current->str);
	else
		printf("[0] ()nil)\n");
	numberofnodes = numberofnodes + 1;
	current = current->next;
}
return (numberofnodes);
}
