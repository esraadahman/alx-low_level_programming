#include "lists.h"

/**
 * dlistint_len - Return len of list
 * @h: struct
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
