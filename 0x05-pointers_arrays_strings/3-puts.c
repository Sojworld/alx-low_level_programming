#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string, follow by a new line
 * @str: string in a new line
 * Return: void
 */


void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
