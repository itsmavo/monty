#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: the stack
 * @line_num: the current line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
  stack_t *new, *temp;
  char *push_arg = strtok(NULL, "\n \t");
  int pv;
  /* check push_args is valid */
    if (!is_int(push_arg))
    {
      fprintf(stdout, "L%u: usage: push integer\n", line_number);
      exit(EXIT_FAILURE);
      } 

  pv = atoi(push_arg);
  new = malloc(sizeof(stack_t));
  if (new == NULL)
    {
      fprintf(stdout, "Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }
  new->n = pv;
  new->prev = NULL;
  new->next = NULL;
  /*check if stack is empty*/
  if ((*stack) == NULL)
    *stack = new;
  else if (QS)
    {
      /** adds new node of not empty **/
      (*stack)->prev = new;
      new->next = *stack;
      *stack = new;
    }
  else
    {
      /** adds new node at the bottom **/
      temp = *stack;
      while (temp->next != NULL)
	temp = temp->next;
      temp->next = new;
      new->prev = temp;
    }
}
