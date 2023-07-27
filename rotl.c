#include "monty"
/**
 * f_rotl - rotates the stack to the top
 * @head: head 
 * @counter: number
 * return: nothing
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *pieux;

	if (*head == NULL || (*head)->next == NULL)
	{
	return;
	}
	pieux = (*pieux)->next;
	pieux->prev = NUL;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = pieux;
}
