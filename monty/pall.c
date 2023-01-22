#include "monty.h"

/**
 * pall - prints all the value on the stack
 * starting from the top of the stack
 * @stack: the head of the stack
 * @line_number: the line on which the error occured
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	(void) line_number;

	if (*stack)
	{
		current = *stack;
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
