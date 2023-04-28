#include "lists.h"

/**
 * listint_len - Number of elements in a linked listint_t list.
 *
 * @h: Pointer to point to the head of the listint_t list.
 *
 * Return: Number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t NoOfElements = 0;

	while (h)
	{
		NoOfElements++;
		h = h->next;
	}

	return (NoOfElements);
}
