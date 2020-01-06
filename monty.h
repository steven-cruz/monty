#ifndef MONTY_H
#define MONTY_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define delim "\n\r\t "
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define UNUSED(x) (void)(x)

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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


/* variables */
/**
 * struct variables - global variables to be used.
 * @lineptr: lineptr for getline.
 * @line_number: returns what line_number is getline reading.
 * @value: string vuale of second argument in file.
 * @int_val: convering value to int.
 * @cmd: string value of first argument in file.
 * @ret_val: return vuale for main file.
 * @flag: always successful.
 */
typedef struct variables
{
	char *lineptr;
	unsigned int line_number;
	char *value;
	int int_val;
	char *cmd;
	int ret_val;
	char *flag;
} vars;

/* global variables */
extern vars gvars;


/* prototypes */
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void op_pchar(stack_t **stack, unsigned int line_number);
void op_mod(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_pstr(stack_t **stack, unsigned int line_number);
void op_rotl(stack_t **stack, unsigned int line_number);
void op_rotr(stack_t **stack, unsigned int line_number);
void op_queue(stack_t **stack, unsigned int line_number);
void op_stack(stack_t **stack, unsigned int line_number);


/* helper */
void free_l(stack_t *head);
int find_op(stack_t **head);
int tokenizer(char *str);
int check_val(char *str);
int list_len(stack_t **h);
int newline_check(char *str);

#endif /* MONTY_H */
