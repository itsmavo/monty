#include "monty.h"

/**
 * rotl - rotates the bottom element to first element on the stack
 * @stack: the stack
 * @line_number: line being executed
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  int fv;

  UNUSED(line_number);
  temp = *stack;
  if (temp)
    fv = temp->n;
  while (temp != NULL)
    {
      if (temp->next)
	temp->n = temp->next->n;
      else
	temp->n = fv;
      temp = temp->next;
    }
}
