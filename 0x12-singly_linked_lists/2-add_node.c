#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the node
 *
 * Return: address of the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newNode->next = *head;
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
