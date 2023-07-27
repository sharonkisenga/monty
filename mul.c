#include "monty.h"
/**
 * f_mul - multiplies the element
 * @head: stack
 * @counter: the number
 * return: nothing
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, pieux;

	h = *head;
	while (h)
	{
	h = h->next;
	length++;
	}
	if (length < 2)
	{
	fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
	fclose(pit.file);
	free(pit.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	h = *head;
	pieux = h->next->n *h->n;
	h->next->n = pieux;
	*head = h->next;
	free(h);
}
