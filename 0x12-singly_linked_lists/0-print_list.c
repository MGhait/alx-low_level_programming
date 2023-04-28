#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: interger length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0)
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		num++;
	}

	return (num);
}

