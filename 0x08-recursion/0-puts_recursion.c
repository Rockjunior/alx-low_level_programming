#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - prints a string followed by a new line
*@s:character to be printed
*Return:returns void
*/
void _puts_recursion(char *s)
{
  if (*s == '\0')
  {
    putchar('\n');
    return;
  }
  //print current xcter
  putchar(*s);
  _puts_recursion(s+1);
}
int main()
{
  char str[] = "Recursive,Functions";
  _puts_recursion(str);
  return (0);
}
