#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: value of the new node.
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	new = malloc(sizeof(dlistint_t)); /* allocate memory for new node */

	if (new == NULL) /* check if malloc failed */
		return (NULL);

	new->n = n; /* assign value to new node */

	if (*head == NULL) /* check if list is empty */
	{
		*head = new; /* assign head to new node */

	} else {

	temp = *head; /* assign temp to head of list */

	while (temp->next != NULL) /* loop until last node in list is found */ 
	{ 
        temp = temp->next;  /* move temp to next node in list*/ 

    } 

    temp->next = new; /* assign last node in list to point to new node*/ 

    } 

    return (new);  /* return address of new element*/ 
}