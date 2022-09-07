#include "monty.h"

/**
 * _pall - prints all the values of the stack from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 * Return: nothing
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	
	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
