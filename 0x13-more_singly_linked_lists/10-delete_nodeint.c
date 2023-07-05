#include"lists.h"
/**
 * delete_nodeint_at_index - delete a node in a link list
 * @head:pointer to the first element i  the list
 * @index: index of the node to ne deleted
 * Return:@ 1(success) -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i = 0;

	current = NULL;
	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
