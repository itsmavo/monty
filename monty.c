#include "monty.h"
#include <stdio.h>
int QS = 1;
/**
 * main - main fuction for monty
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: exit code
 */
int main(int argc, char **argv)
{
  FILE *file_in;
  unsigned int line_number = 0;
  char *line = NULL;
  stack_t *top = NULL;
  instruction_t *instruct = NULL;
  size_t gsize = 0;
  int len = 0;
  
  /* check for corrext num of args */
  if (argc != 2)
    {
      fprintf(stdout, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }

  /* opening file */
  file_in = fopen(argv[1], "r");
  if (file_in == NULL)
    {
      fprintf(stdout, "Error: Cant open file %s\n",argv[1]);
      exit(EXIT_FAILURE);
    }

  /*parse file*/
  while ((len = getline(&line, &gsize, file_in)) != EOF)
    {
      line_number++;
      instruct = line_parse(line);

      if(!(instruct->opcode) || instruct->opcode[0] == '#')
	{
	  free(instruct);
	  if (line)
	    free(line);
	  line = NULL;
	  continue;
	}
      if (instruct->f)
	instruct->f(&top, line_number);
      else
	{
	  fprintf(stdout, "L%d: unknown instruction %s\n", line_number,
		  instruct->opcode);
	  if (line)
	    free(line);
	  if (top)
	    free_stack(top);
	  free(instruct);
	  fclose(file_in);
	  exit(EXIT_FAILURE);
	}
      if (line)
	free(line);
      line = NULL;
      free(instruct);
    }
  if (line)
    free(line);
  free_stack(top);
  fclose(file_in);
  return (0);
}
