#include "main.h"

/**
 * swap - switches the two top elements of the stack.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
  int swp;

  if ((*stack) == NULL)
    {
      fprintf(stdout, "L%d: can't swap, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }
  if((*stack)->next == NULL)
    {
      fprintf(stdout, "L%d: can't swap, stack too short\n", line_number);
      exit(EXIT_FAILURE);
    }
    swp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = swp;
}
