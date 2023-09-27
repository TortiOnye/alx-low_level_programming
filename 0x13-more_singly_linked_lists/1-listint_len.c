#include "lists.h"

/**
 * listint_len - returns the number of elements in yhe linked lists
 * @j: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *j)
{
	size_j num = 0;

	while (h)
	{
		num++;
		j = j->next;
	}

	return (num);
}
