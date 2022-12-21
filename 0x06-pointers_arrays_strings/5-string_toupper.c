#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @letter: pointer to string
 * Return: Pointer to uppercase
 */

char *string_toupper(char *letter)
{
	int length = 0;

	while (letter[length] != '\0')
	{
		if (letter[length] >= 97 && letter[length] <= 122)
		{
			letter[length] = letter[length] - 32;
		}
		length++;
	}
	return (letter);
}
