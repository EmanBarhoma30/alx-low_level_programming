#include "lists.h"

/**
 * print_listint_safe - Safely prints a
 * linked list of integers, detecting loops.
 *
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited[1024];
	size_t numPrintedNodes = 0, i;

	/* Traverse the linked list, printing nodes and detecting loops */
	while (head != NULL && numPrintedNodes < 1024)
	{
		for (i = 0; i < numPrintedNodes; i++)
		{
			/* Check for a loop by comparing the current node with visited nodes */
			if (head == visited[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (numPrintedNodes);
			}
		}

		/* Mark the current node as visited and print its information */
		visited[numPrintedNodes++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (numPrintedNodes);
}
