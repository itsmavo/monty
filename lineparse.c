#include "main.h"

/**
 * line_parse - parses through a line and returns the proper instruction
 * @line: the line
 *
 * Return: a pointer to the proper instruction
 */

instruction_t *line_parse(char *line)
{
  char *opcode;
  instruction_t *instruct;

  opcode = get_opcode(line);
  instruct = malloc(sizeof(*instruct));
  if (instruct == NULL)
    {
      fprintf(stdout, "Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }

  instruct->opcode = opcode;
  instruct->f = NULL;

  if (instruct->opcode)
    {
      if (strcmp(instruct->opcode, "push") == 0)
	instruct->f = push;
      if (strcmp(instruct->opcode, "pall") == 0)
	instruct->f = pall;
      if (strcmp(instruct->opcode, "pint") == 0)
        instruct->f = pint;
      if (strcmp(instruct->opcode, "pop") == 0)
        instruct->f = pop;
      if (strcmp(instruct->opcode, "swap") == 0)
        instruct->f = swap;
      if (strcmp(instruct->opcode, "add") == 0)
        instruct->f = add;
      if (strcmp(instruct->opcode, "nop") == 0)
        instruct->f = nop;
    }
  return (instruct);
}
