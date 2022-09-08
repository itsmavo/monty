#include "monty.h"

/**
 * pstr - prints string starting the top of the stack
 * @stack: the stack
 * @line_number: line num being executed
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;

  temp = *stack;
  UNUSED(line_number);
  while (temp != NULL && temp->n != 0 && isprint(temp->n))
    {
      printf("%c", temp->n);
      temp = temp->next;
    }
  printf("\n");
}
