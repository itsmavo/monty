#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  UNUSED(line_number);

  temp = *stack;
  while(temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
    }
}
