#include"lists.h"
/**
 * add_nodeint_end - adding node to the end
 * @head: the head pointer
 * @n: the data
 * Return: address of new elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
