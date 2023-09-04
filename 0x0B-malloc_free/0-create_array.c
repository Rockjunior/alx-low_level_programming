#include "main.h"
#include <stdlib.h>

/**
* create_array - creating an array of chars,
* initialize with specific char.
*
* @size: size of the array
* @c: initial value to be assigned to each element of the array
*
* Return: a pointer to array, or NULL if it fails
*/

{
char *array;
unsigned int newvalue;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size); 
if (array == NULL)
return (NULL);

newvalue = 0;         
do {
array[newvalue] = c; 
newvalue++;          
} while (newvalue < size); 

return (array);
}