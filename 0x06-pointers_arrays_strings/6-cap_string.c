#include "main.h"

/**
 * cap_string - Capitalize every first letter of a word in a string
 * seperators of words are: space, tabulation
 * new line
 * @s: Pointer to s
 * Return: Pointer to s
 */

char *cap_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
			|| s[count] == ',' || s[count] == ';' || s[count] == '.'
			|| s[count] == '.' || s[count] == '!' || s[count] == '?'
			|| s[count] == '"' || s[count] == '(' || s[count] == ')'
			|| s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
