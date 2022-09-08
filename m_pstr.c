#include "monty.h"
#include "lists.h"

/**
 * m_pstr - handles the pstr instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	(void)line_number;

	if (!node)
	{
		putchar('\n');
		return;
	}

	while (node && node->n != 0 && node->n >= 0 && node->n <= 127)
	{
		putchar(node->n);
		node = node->next;
	}

	putchar('\n');
}
