#include "lists.h"

/**
 * sum_listint -  return sum of all the data (n) of a listint_t linked list.
 * @head: pointer to starting node
 *
 * Return: sum of data.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr, *temp;
	int sum;

	ptr = head;
	sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		temp = ptr->next;
		sum = sum + ptr->n;
		ptr = temp;
	}
	return (sum);
}
