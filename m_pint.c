#include "monty.h"
#include "lists.h"

/**
 * m_pint - handles the pint instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (!head)
	{
		dprintf(STDERR_FILENO, PINT_FAIL, line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", head->n);
}
