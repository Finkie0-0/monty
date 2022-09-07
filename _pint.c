#include "monty.h"

/**
 * _pint - prints value on top of stack or exits when stack empty
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 * Return: nothing
 */
void _pint(stack_t *stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: coint pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
