#include "lists.h"

/**
 * dlistint_len - Counts number of elements in a linked dlistint_t list.
 * @h: The head of  dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_des = 0;

	while (h)
	{
		no_des++;
		h = h->next;
	}

	return (no_des);
}
