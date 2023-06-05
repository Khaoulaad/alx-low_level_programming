#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free Linked List
 *@head: head of the linked list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
