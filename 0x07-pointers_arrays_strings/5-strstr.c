#include "main.h"
/**
 * _strstr=locates a substring and pointer
 * @haystack:the long string to search
 * @needle:the first occurence of the substracting
 * Return:a pointer beg of substring
 * or
 * @NULL if its not found.
 */
char *_strstr(char *haystack, char *needle)
{
  unsigned int k = 0, l = 0;

  while(haystack[k])
  {
    while (needle[l] && (haystack[k] == needle[0]))
    {
      if (haystack[k + l] == needle[l])
        l++
      else
        break;
    }
    if (needle[l])
    {
      k++;
      l = 0;
    }
    else
      return (haystack + k);
  }
  return (0);
}
