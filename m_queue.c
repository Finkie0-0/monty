#include "monty.h"
#include "lists.h"

/**
 * m_queue - handles the queue instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void m_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.qflag = 1;
}
