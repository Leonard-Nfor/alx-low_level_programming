#include"lists.h"
/**
 * free_listint - A function that free node
 * @head: pointer
 * Return : Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node1;

	while (head)
	{
		node1 = head->next;
		free(head);
		head = node1;
	}
}
