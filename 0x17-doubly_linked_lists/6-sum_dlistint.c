#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n)
 * in a doubly linked list.
 *
 * @head: Pointer to the head of the list.
 * Return: Sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
