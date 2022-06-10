#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - this function checks if a singly linked list has a cycle
 * @list: LinkedList Parameter
 * 
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	while (fast != NULL && slow != NULL)
	{
		slow = slow->next;
		if (fast->next == NULL)
			return (0);
		fast = fast->next;
		fast = fast->next;

		if (fast == slow)
			return (1);
	}
	return (0);
}