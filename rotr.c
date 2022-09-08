#include "monty.h"

/**
 * rotr - rotates the stack to the bottome
 * @stack: the stack
 * @line_number: the line being exec
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
  stack_t *temp;
  int lv;

  UNUSED(line_number);
  if ((*stack) != NULL)
    {
      temp = *stack;
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      lv = temp->n;
      while (temp->prev != NULL)
	{
	  temp->n = temp->prev->n;
	  temp = temp->prev;
	}
      temp->n = lv;
    }
}
