#include "main.h"

/**
 * _puts - prints a string, followed by a new
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(char[i]);
		i++;
	}

	_putchar('\n');
}
