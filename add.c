#include "monty.h"
/**
 * f_add - adds the element
 * @head: the head the stack
 * @counter: number
 * return: nothing
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, pieux;

	h = *head;
	while(h)
	{
	h = h->next;
	length++;
	}
	if (length < 2)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	h = *head;
	pieux = h->n + h->next->n;
	h->next->n = pieux;
	*head = h->next;
	free(h);
}
