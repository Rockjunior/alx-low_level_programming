#include "main.h"
#define NULL 0

/**
 * _strchr-locate first coccurence of char in string
 * and returns pointer there
 * @s:string to search/in the string
 * @c:target and also the occurrence of character
 *
 * Return:pointer to that character in string
 */

char *_strchar(char *s, char c)
{
  int number = 0;

  while (s[number] != '\0' && s[number] != c)
    number++;

  if (s[number] == c)
    return (&S[number]);

  else
    return (NULL);
}
