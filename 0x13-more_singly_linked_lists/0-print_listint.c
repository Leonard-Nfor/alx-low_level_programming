#include"lists.h"
/**
 * print_listint - print all the element of a list
 * @h: A pointer use to traverse the note
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
