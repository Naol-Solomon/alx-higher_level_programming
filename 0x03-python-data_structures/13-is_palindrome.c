#include "lists.h"

/*
 * File: 13-is_palindrome.c
 * Auth: Naol Solomon
 */

listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - Reverses a singly-linked listint_t list.
 * @head: A pointer to the starting node of the list to reverse.
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *next, *prev = NULL;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*head = prev;
	return (*head);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 * Return: If the linked list is not a palindrome - 0.
 *         If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *tem, *revo, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tem = *head;
	while (tem)
	{
		size++;
		tem = tem->next;
	}

	tem = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		tem = tem->next;

	if ((size % 2) == 0 && tem->n != tem->next->n)
		return (0);

	tem = tem->next->next;
	revo = reverse_listint(&tem);
	mid = revo;

	tem = *head;
	while (revo)
	{
		if (tem->n != revo->n)
			return (0);
		tem = tem->next;
		revo = revo->next;
	}
	reverse_listint(&mid);

	return (1);
}
