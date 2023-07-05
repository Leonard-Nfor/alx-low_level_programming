#include"lists.h"
/**
 * pop_listint - Function that delete head node
 * @head: The head pointer
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);
	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (value);
}
