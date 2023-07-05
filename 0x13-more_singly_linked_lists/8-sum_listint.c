#include"lists.h"
/**
 * sum_listint - Sum all the data of a list
 * @head: A pointer to first node in the list
 * Return:The sum of data
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp;

	temp = head;

	while (temp != 0)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
