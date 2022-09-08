#include "monty.h"

/**
 * mod - gets the modulus of the top two elements of the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */

void mod(stack_t **stack, unsigned int line_number)
{
  int lus;

  if ((*stack) == NULL || (*stack)->next == NULL)
    {
      fprintf(stdout, "L%d: can't mod, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }
  if ((*stack)->n == 0)
    {
      fprintf(stdout, "L%d: division by zero\n", line_number);
      exit(EXIT_FAILURE);
    }

  lus = (*stack)->next->n % (*stack)->n;
  pop(stack, line_number);
  (*stack)->n = lus;
}
