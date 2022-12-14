#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Returns: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a', i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

