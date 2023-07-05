#include"lists.h"
/**
 * insert_nodeint_at_index - insert a new node in a list
 * @head: pointerto the first node i  the list
 * @idx: where the new node will be added
 * @n: the data to be insrted i  the new node
 * Return: pointer to tbe newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (head || new == 0)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

