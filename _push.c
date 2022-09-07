#include "monty.h"

/**
 * check_for_digit - check if a string contain digits
 * @arg: string to check
 * Return: 0 if only digits else 1
 */
static int check_for_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * _push - add to the stack
 * @stack: the double pointer to the stack
 * @line_number: number of the line in the file
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, "\n\t\r ");
	if (arg == NULL || check_for_digit(arg))
	{
		dprintf(STDOUT_FILENO,
			"L%u: usage: push integer\n",
			line_number);
		exit(EXIT_FALIURE);
	}
	n = atoi(arg);
	if (!add_node(stack, n))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.stack_len++;
}
