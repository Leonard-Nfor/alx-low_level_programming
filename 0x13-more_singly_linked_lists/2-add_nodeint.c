#include"lists.h"
/**
 * add_nodeint - add node to the beginnning of list
 * @head : the head pointer
 * @n: The number of nodes
 * Return : The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
