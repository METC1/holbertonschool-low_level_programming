#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * containing the duplicated str
 * @head: pointer to the pointer pointing the first element of
 * the first node of a single linked list
 * @n: n value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		for ( ; temp->next != NULL ;)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
