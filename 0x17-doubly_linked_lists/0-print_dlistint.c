#include<stdio.h>
#include"lists.h"
/**
 * print_dlistint - print number of elements
 * @h: head pointer
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
