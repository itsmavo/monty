#include "monty.h"

/**
 * div - divides the two top elements in a stack
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void divi(stack_t **stack, unsigned int line_number)
{
  int dv;

  if ((*stack) == NULL || (*stack)->next == NULL)
    {
      fprintf(stdout, "L%d: can't div, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }

  if ((*stack)->n == 0)
    {
      fprintf(stdout, "L%d: division by zero\n", line_number);
      exit(EXIT_FAILURE);
    }

  dv = (*stack)->next->n / (*stack)->n;
  pop(stack, line_number);
  (*stack)->n = dv;
}
