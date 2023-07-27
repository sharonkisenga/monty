#include "monty.h"
/**
 * f_sub - substract
 * @head: the head
 * @counter: line_number
 * return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *pieux;
	int mus, nodes;

	pieux = *head;
	for (nodes = 0; pieux !=  NULL; nodes++)
		pieux = pieux->next;
	if (nodes < 2)
	{
	fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
	fclose(pit.file);
	free(pit.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	pieux = *head;
	mus = pieux->next->n - pieux->n;
	pieux->next->n = mus;
	*head = pieux->next;
	free(pieux);
}
