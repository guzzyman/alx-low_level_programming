#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: value of the new node.
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	new = malloc(sizeof(dlistint_t)); /* allocate memory for new node */

	if (new == NULL) /* check if malloc failed */
		return (NULL);

	new->n = n; /* assign value to new node */

	if (*head == NULL) /* check if list is empty */
	{
		*head = new; /* assign head to new node */

	} else { /* if list is not empty */

	(*head)->prev = new; /* assign prev of head to new node */

	new->next = *head; /* assign next of new node to head */

	*head = new; /* assign head to new node */

    }

    return (new); /* return address of the new element*/  
}