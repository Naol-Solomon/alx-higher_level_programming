#include "lists.h"

/**
 * check_cycle - check a cycle linked list
 * @list: head pointer to the list
 * Return: 1 if cycle is there, otherwise 0
*/
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (list == NULL)
		return (0);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}
