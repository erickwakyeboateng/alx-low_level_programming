#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the function
 *
 * @head: A pointer to the address of the head of the function
 *
 * @n: Integer to contain new node.
 *
 * Return: Address of element when successful; NULL when it fails.
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;

	*head = NewNode;

	return (NewNode);
}
