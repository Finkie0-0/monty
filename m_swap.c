#include "monty.h"
#include "lists.h"

/**
 * swap_handler - handles the swap instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void swap_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *node = NULL;
	int num;

	if (dlistint_len(*stack) < 2)
	{
		dprintf(STDERR_FILENO, SWAP_FAIL, line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	temp = get_dnodeint_at_index(*stack, 0);
	num = temp->n;
	delete_dnodeint_at_index(stack, 0);
	node = insert_dnodeint_at_index(stack, 1, num);
	if (!node)
	{
		dprintf(STDERR_FILENO, MALLOC_FAIL);
		free_all(1);
		exit(EXIT_FAILURE);
	}
}
