#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int nnode;

	while (head)
	{
		nnode = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (nnode > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
