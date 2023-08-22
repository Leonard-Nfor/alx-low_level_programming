#include"lists.h"
/**
 * add_dnodeint_end - function's name
 * @head: head pointer
 * @n: data
 * Return: address of data
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (tail != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = tail;
	return (new);
}
