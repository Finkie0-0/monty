#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct linefile_s - struct of the line file
 * @opcode: the opcode that will be implemented
 * @arg: Aurguments
 */
typedef struct linefile_s
{
	char *arg;
	char *opcode;
} linefile_t;

extern char *arguments;
int _putchar(char c);
void _puts(char *str);

/* Task 0 */
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);

/* Task 1 */
void _pint(stack_t **stack, unsigned int line_number);

/* Task 2 */
void _pop(stack_t **stack, unsigned int line_number);

/* Task 3 */
void _swap(stack_t **stack, unsigned int line_number);

/* Task 4 */
void _add(stack_t **stack, unsigned int line_number);

/* Task 5 */
void _nop(stack_t **stack, unsigned int line_number);

/* Task 6 */
void _sub(stack_t **stack, unsigned int line_number);

/* Task 7 */
void _div(stack_t **stack, unsigned int line_number);

/* Task 8 */
void _mul(stack_t **stack, unsigned int line_number);

/* Task 9 */
void _mod(stack_t **stack, unsigned int line_number);

/* Task 11 */
void _pchar(stack_t **stack, unsigned int line_number);

/* Task 12 */
void _pstr(stack_t **stack, unsigned int line_number);

/* Task 13 */
void _rotl(stack_t **stack, unsigned int line_number);

/* Task 14 */
void _rotr(stack_t **stack, unsigned int line_number);

/* Task 15 */
void _stack(stack_t **stack, unsigned int line_number);
void _queue(stack_t **stack, unsigned int line_number);

/* Extras */
void get_opcode(stack_t **stack, unsigned int line_number, char *code);
void add_node(stack_t **stack, int argument);
void add_queue(stack_t **stack, int argument);
void free_stack_t(stack_t *h);

#endif

