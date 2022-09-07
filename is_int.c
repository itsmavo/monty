#include "main.h"

/**
 * is_int - checks if a string is valid for atoi
 * @str: string
 *
 * Return: 1 for true, 0 for false
 */
int is_int(char *str)
{
  int a = 0;
  if (str == NULL)
    return (0);
  if(*str == ' ')
    a++;
  if(*str == '-')
    a++;
  for(; str[a]; a++)
    {
      if (!isdigit(str[a]))
	return (0);
    }
  return (1);
}
