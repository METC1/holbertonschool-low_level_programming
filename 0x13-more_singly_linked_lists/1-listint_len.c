#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked list
 * @h: pointer to the first node of a single linked list
 * Return: size_t type
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	for ( ; h != NULL ; i++)
	{
		/*printf("%d\n", h->n);*/
		h = h->next;
	}
	return (i);
}
