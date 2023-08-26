#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void print_rev(char *str)
{
	int i = 0, j;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
