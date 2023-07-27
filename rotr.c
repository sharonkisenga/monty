#include "monty"
/**
 * f_rotr - implement the rotr
 * @head: head
 * @counter: number
 * return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *take;

	take = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
	return;
	}
	while (take->next)
	{
	take = take->next;
	}
	take->next = *head;
	take->prev->next = NULL;
	take->prev = NULL;
	(*head)->prev = take;
	(*head) = take;
}
