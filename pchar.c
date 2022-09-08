#include "main.h"

/**
 * pchar - prints the char at the top of the stack.
 * @stack: the stack
 * @line_number: the current  line number
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
  if ((*stack) == NULL)
    {
      fprintf(stdout, "L%d: can't pchar, stack empty\n", line_number);
      exit(EXIT_FAILURE);
    }
  if(!isprint((*stack)->n))
    {
      fprintf(stdout, "L%d: can't pchar, value out of range\n", line_number);
      exit(EXIT_FAILURE);
    }
  fprintf(stdout, "%c\n", (*stack)->n);
}
