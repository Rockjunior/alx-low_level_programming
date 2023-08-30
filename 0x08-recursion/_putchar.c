#include <unistd.h>
/**
 * _putcgar-writes the chararcter c to stdout
 * @c:the character to print
 * Return:success always
 * on error return -1 and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
