#include "monty.h"

/**
 * pall -function to print all elements in a stack.
 * @stack: double pointer of type sactk_t to head of doubly linked list.
 * @line_number: unsigned int for line number.
 * Return: no return, print list.
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}