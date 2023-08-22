#include"lists.h"
#include<stdio.h>
/**
 * dlistint_len - function to print total elments
 * @h: The head pointer
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
