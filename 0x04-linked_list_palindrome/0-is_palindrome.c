#include "lists.h"

/**
 * is_palindrome - checks if a singly list is a palindrome
 * @head: List input
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *current;
	listint_t *back;
	listint_t *temp;
	int count;

	if (head == NULL || *head == NULL)
		return (1);

	current = *head;
	back = *head;
	count = 0;

	while (current->next != NULL)
	{
		current = current->next;
		count++;
	}

	while (count > 0)
	{
		temp = back->next;
		back->next = temp->next;
		temp->next = current->next;
		current->next = temp;
		current = current->next;
		count--;
	}

	while (current->next != NULL)
	{
		if (current->n != back->n)
			return (0);
		current = current->next;
		back = back->next;
	}

	return (1);
}