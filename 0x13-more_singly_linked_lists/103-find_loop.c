#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	/* Initialize both pointers to the head of the list */
	slow = fast = head;

	/* Use Floyd's Tortoise and Hare algorithm to detect a loop */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* If a loop is detected, reset slow to the head */
		/* and continue until they meet */
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}

	/* If there is no loop or the list is empty, return NULL */
	if (!slow || !fast || !fast->next)
		return (NULL);

	/* Move both pointers until they meet at the start of the loop */
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
