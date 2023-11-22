#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list of integers, detecting loops.
 *
 * @h: A pointer to a pointer to the head node of the linked list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numFreedNodes = 0, i, j;
	listint_t *visited[1024];
	listint_t *current = *h;

	/* Traverse the linked list, freeing nodes and detecting loops */
	while (current != NULL && numFreedNodes < 1024)
	{
		for (i = 0; i < numFreedNodes; i++)
		{
			/* Check for a loop by comparing the current node with visited nodes */
			if (current == visited[i])
			{
				/* Set next pointers of nodes in the loop to NULL */
				for (j = i; j < numFreedNodes; j++)
					visited[j]->next = NULL;

				/* Set the head to NULL to indicate an empty list */
				*h = NULL;
				return (numFreedNodes);
			}
		}

		/* Mark the current node as visited, free it, and move to the next node */
		visited[numFreedNodes++] = current;
		current = current->next;
		free(visited[numFreedNodes - 1]);
	}

	/* Set the head to NULL to indicate an empty list */
	*h = NULL;

	return (numFreedNodes);
}
