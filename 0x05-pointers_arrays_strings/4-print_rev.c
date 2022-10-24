#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= o)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
