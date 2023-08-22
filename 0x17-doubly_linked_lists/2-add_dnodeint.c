#include"lists.h"
/**
 * add_dnodeint - function's name
 * @head: head pointer
 * @n: data to be added
 * Return: return address of n
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
