#include "lists.h"

/**
 * print_listint - Prints the elements of a listint_t list.
 * @h: Points to the head of the list_t list.
 *
 * Return: Returns the number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t NoOfNode = 0;

	while (h)
	{
		NoOfNode++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (NoOfNode);
}

