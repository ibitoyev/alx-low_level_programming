#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: Pointer to array
 * @n: Pointer of element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int card, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		card = a[counter];
		a[counter++] = a[n];
		a[n--] = card;
	}
}
