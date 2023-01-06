#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Returns: Always 0 (Success)
 */

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

