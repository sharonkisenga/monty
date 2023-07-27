#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack
 * @counter: number
 * return: nothing
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
	fclose(pit.file);
	free(pit.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
