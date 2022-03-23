#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * containing the duplicated str
 * @head: pointer to the pointer pointing the first element of
 * the first node of a single linked list
 * @n: value of n
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	size_t nodo = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
	}
}
