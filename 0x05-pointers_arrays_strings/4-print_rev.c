#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: the pointer parameter
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
