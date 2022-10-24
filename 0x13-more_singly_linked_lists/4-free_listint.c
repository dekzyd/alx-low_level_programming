#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
