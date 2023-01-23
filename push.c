#include "monty.h"

/**
 * add - add the top element of the stack
 * @stack: a pointer to the head of the stack
 * @line_number: the line number
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sum;

	if (!stack || !(*stack) || !(*stack)->next)
	{

	printf("L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = *stack;

	sum = temp->n + temp->next->n;
	temp->next->n = sum;

	*stack = temp->next;

	free(temp);
}
