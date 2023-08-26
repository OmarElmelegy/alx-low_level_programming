#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */


void print_rev(char *str)
{
	int i = 0, j;

	while (str[i])
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
