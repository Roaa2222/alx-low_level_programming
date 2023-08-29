#include "lists.h"

/**
 * listint_len - prints the number of the elements
 * @h: pointer the next node
 *
 * Return: size of the list
*/

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
	h = h->node;
	i++;
}
return (i);
}
