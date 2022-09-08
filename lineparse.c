#include "monty.h"

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
      if (strcmp(instruct->opcode, "sub") == 0)
        instruct->f = sub;
      if (strcmp(instruct->opcode, "div") == 0)
        instruct->f = divi;
      if (strcmp(instruct->opcode, "mul") == 0)
        instruct->f = mul;
      if (strcmp(instruct->opcode, "mod") == 0)
        instruct->f = mod;
      if (strcmp(instruct->opcode, "pchar") == 0)
        instruct->f = pchar;
      if(strcmp(instruct->opcode, "pstr") == 0)
	instruct->f = pstr;
      if(strcmp(instruct->opcode, "rotl") == 0)
	instruct->f = rotl;
      if(strcmp(instruct->opcode, "rotr") == 0)
	instruct->f = rotr;
      if(strcmp(instruct->opcode, "stack") == 0)                                                instruct->f = stack;
      if(strcmp(instruct->opcode, "queue") == 0)                                                instruct->f = queue; 
    }
  return (instruct);
}
