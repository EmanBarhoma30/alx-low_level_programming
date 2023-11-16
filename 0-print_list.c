#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current_node;

	current_node = h;
	while (current_node != NULL)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);

		count++;
		current_node = current_node->next;
	}

	return (count);
}
