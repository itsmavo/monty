#include "monty.h"
/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: the stack
 * @line_number: line number of the file
 */
void stack(stack_t **stack, unsigned int line_number)
{
  UNUSED(stack);
  UNUSED(line_number);
  QS = 1;
}

/**
 * queue - sets the format of the data to a queue(FIFO)
 * @stack: the stack
 * @line_number: line number of the file
 */
void queue(stack_t **stack, unsigned int line_number)
{
  UNUSED(stack);
  UNUSED(line_number);
  QS = 0;
}
