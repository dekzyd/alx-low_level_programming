#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - prints number of all the elements in a list
 * @h: pointer to the address of the first element
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL||h->next == NULL)
		return (0);
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
