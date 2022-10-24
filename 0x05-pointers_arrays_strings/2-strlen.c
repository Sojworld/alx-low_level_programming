#include "main.h"

/**
 * int_strlen - returns the lenght of a string
 * @s: a pointer
 * Return: lenght of a srting
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
