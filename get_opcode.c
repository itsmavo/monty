#include "main.h"

/**
 * get_opcode - gets the opcode and sets arg
 * @string: the line of code
 *
 * Return: the opcode
 */
char *get_opcode(char *string)
{
  char *opcode;
  /** grabs first arg **/
  opcode = strtok(string, "\n\t ");
  return (opcode);
}
