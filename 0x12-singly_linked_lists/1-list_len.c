#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all elements of list_t
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t numberofnodes = 0;

while (current != NULL)
{
numberofnodes = numberofnodes + 1;
current = current->next;
}
return (numberofnodes);
}
