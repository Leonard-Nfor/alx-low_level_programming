#include"lists.h"
/**
 * get_nodeint_at_index - Return  the node at a certain index
 * @head:first node in the linklist
 * @index: index of the node to return
 * Return: return pointer to the node we are looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
