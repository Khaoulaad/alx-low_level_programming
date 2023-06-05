#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - sum of the data of the LL
 *@head: head of the LL
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
			return (sum);
}
