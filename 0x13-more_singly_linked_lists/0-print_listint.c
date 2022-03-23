#include "lists.h"
/**
 * print_listint -  returns the number of elements in a linked list
 * @h: pointer to the first node of a single linked list
 * Return: size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for ( ; h != NULL ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
