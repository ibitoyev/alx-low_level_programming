#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: numbers of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n];
	}
	return (0);
}
