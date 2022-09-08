#include "monty.h"
#include "lists.h"

/**
 * m_rotr - handles the rotr instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void m_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num = 0, len = dlistint_len(*stack);

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, len - 1);
	num = temp->n;
	delete_dnodeint_at_index(stack, len - 1);
	add_dnodeint(stack, num);
}
