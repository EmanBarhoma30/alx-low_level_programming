#include "lists.h"

/**
 * sum_listint - Computes the sum of the values (n) in a listint_t linked list.
 *
 * @head: Pointer to the first node of the listint_t linked list.
 *
 * Return: The total sum of the values (n) in the listint_t linked list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *currentNode;
	int totalSum = 0;

	/* Check if the linked list is empty */
	if (!head)
	{
		return (0);
	}

	/* Iterate through the linked list, accumulating the sum of node values */
	for (currentNode = head; currentNode; currentNode = currentNode->next)
	{
		totalSum += currentNode->n;
	}

	return (totalSum);
}
