#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a node
 * at a specified index from a listint_t list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be removed.
 *
 * Return: 1 if the removal is successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int currentIndex = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	current = *head;

	/* Remove the node at index 0 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at index (index - 1) */
	while (current != NULL && currentIndex < index - 1)
	{
		current = current->next;
		currentIndex++;
	}

	/* If the index is out of bounds, return -1 */
	if (currentIndex != index - 1)
		return (-1);

	/* Remove the node at the specified index */
	temp = current->next;
	current->next = current->next->next;
	free(temp);

	return (1);
}
