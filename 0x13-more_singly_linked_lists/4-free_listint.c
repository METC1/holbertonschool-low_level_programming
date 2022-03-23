#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: pointer to the pointer pointing the first element of
 * the first node of a single linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new = head;

	for ( ; new != NULL ;)
	{
		head = head->next;
		free(new);
		new = head;
	}
}
