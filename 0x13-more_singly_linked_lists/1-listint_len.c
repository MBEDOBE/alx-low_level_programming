#include "lists.h"

/**
 * listint_len - function to print the number of nodes
 * @x: pointer to the list
 * Return: the count of nodes
 */
size_t listint_len(const listint_t *x)
{
	size_t count = 0;

	while (x != NULL)
	{
		x = x->next;
		count++;
	}
	return (count);
}
