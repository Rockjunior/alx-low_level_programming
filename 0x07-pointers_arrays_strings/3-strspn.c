#include "main.h"
/**
 * _strspn-return length of string that resembles values correctly
 * @s:string to search and the initial segment
 * @accept:target values which consist only of bytes
 *
 * Return:number of bytes target in values
 */

unsigned int _strspn(char *s, char *accept)
{
  int number_i = 0, k;
  int values = 0;

  while (s[number_i] != '\0')/*Iterate in string*/
  {
    for (k = 0; accept[k] != '\0'; k++)/*Iterate through target*/
    {
      if (s[number_i] == accept[k])/*record & break at first var*/
      {
        values++;
        break;
      }
      if (accept[k+1} == '\0' && s[number_i] != accept[k])
        return (values);
  }
  number_i++;
}
return (values);/*return all values if all are correct till end*/
}
