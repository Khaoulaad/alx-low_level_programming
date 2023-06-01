#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the newly added node
 *
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}

/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
