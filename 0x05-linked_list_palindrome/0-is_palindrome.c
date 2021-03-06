#include "lists.h"

/**
 * check_recursively - Recursively moves the pointers to check if palindrome
 * @start: start - double pointer
 * @end: end - pointer to the end
 *
 * Return: Either 0 or 1 depending if is a palindrome
 */
int recursive(listint_t **start, listint_t *end)
{
	int check;

	if (end == NULL)
		return (1);

	check = recursive(start, end->next);

	if (check == 0)
		return (0);

	if ((*start)->n == end->n)
		check = 1;
	else
		check = 0;

	*start = (*start)->next;

	return (check);
}
/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * 
 * @head: The start of the linked list
 * Return: int
 */
int is_palindrome(listint_t **head)
{
	listint_t **start = head;
	listint_t *end = *head;

	if (*head == NULL)
		return (1);

	return (recursive(start, end));
}