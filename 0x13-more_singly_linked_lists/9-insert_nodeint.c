#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node
 * with a given value into a listint_t list at a specified index.
 *
 * @head: Pointer to the head of the list.
 * @idx: Index at which to insert the new node.
 * @n: Value to be assigned to the data (n) of the new node.
 *
 * Return: The address of the newly inserted node, or NULL if insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int currentIndex = 0;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Set the value of the new node */
	newNode->n = n;

	/* Insert at the beginning of the list (index 0) */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	/* Traverse the list to find the node at index (idx - 1) */
	current = *head;
	while (current != NULL && currentIndex < idx - 1)
	{
		current = current->next;
		currentIndex++;
	}

	/* If the index is out of bounds, free the new node and return NULL */
	if (currentIndex != idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	/* Insert the new node into the list */
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
