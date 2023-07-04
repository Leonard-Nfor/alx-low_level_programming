#include"lists.h"
/**
 * listint_len - function that list the number of elements
 * @h: The traverser pointer
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
