#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: The head of dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_des = 0;

	while (h)
	{
		no_des++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (no_des);
}
