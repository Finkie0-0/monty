#include "monty.h"
#include "lists.h"

/**
 * m_rotl - handles the rotl instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void m_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num  = 0;

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, 0);
	num = temp->n;
	delete_dnodeint_at_index(stack, 0);
	add_dnodeint_end(stack, num);
}
