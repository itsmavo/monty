#include "monty.h"

/**
 * add - adds the top two elements in the stacl=k.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
  int sum;

  if ((*stack) == NULL || (*stack)->next == NULL)
    {
      fprintf(stdout, "L%d: can't add, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  sum = (*stack)->next->n + (*stack)->n;
  pop(stack, line_number);
  (*stack)->n = sum;
}
