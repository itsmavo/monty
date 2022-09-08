#include "monty.h"

/**
 * mul - multipies the two top elements in the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
  int tm;

  if ((*stack) == NULL || (*stack)->next == NULL)
    {
      fprintf(stdout, "L%d: can't mul, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }
  tm = (*stack)->next->n * (*stack)->n;
  pop(stack, line_number);
  (*stack)->n = tm;
}
