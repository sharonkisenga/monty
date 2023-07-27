#include "monty"
/**
 * f_queue - print the top
 * @head: stack
 * @counter: number
 * return: nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	pit.lifi = 1;
}
/**
 * addqueue - add node to the tail stack 
 * @n: new_value
 * @head: the stack
 * return: nothing
 */
void aaqueue(stack_t **head, unsigned int counter)
{
	stack_t *new_node, *pieux;
	pieux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
	printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (pieux);
	{
	while (pieux->next)
	pieux = pieux->next;
	}
	if (!pieux)
	{
	*head = new_node;
	new_node->prev = NULL;
	}
	else
	{
	pieux->next = new_node;
	new_node->prev = pieux;
	}
}
