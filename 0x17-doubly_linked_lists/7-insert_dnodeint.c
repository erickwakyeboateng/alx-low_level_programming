#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *point_to_head = *h, *add_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		point_to_head = point_to_head->next;
		if (point_to_head == NULL)
			return (NULL);
	}

	if (point_to_head->next == NULL)
		return (add_dnodeint_end(h, n));

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->prev = point_to_head;
	add_node->next = point_to_head->next;
	point_to_head->next->prev = add_node;
	point_to_head->next = add_node;
	return (add_node);
}
		

