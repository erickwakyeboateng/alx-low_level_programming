#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: when successful - 1 else -1
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (del == NULL)
			return (-1);
		del = del->next;
	}

	if (del == *head)
	{
		*head = del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
	}

	free(del);
