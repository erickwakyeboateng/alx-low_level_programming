#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->prev = NULL;
	add_node->next = *head;
	if (*head != NULL)
		(*head)->prev = add_node;
	*head = add_node;

	return (add_node);
}
