#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: pointer parameter
 */

void rev_string(char *s)
{
	int len, i, half;
	char book;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	half = len / 2;

	while (half--)
	{
		book = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = book;
		i++;
	}
}
