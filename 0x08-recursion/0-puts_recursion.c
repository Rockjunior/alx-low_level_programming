#include "main.h"

/**
 * _puts_recursion - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
void _puts_recursion(char *c)
{
	if (*c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*c);
	c++;
	_puts_recursion(c);
}
