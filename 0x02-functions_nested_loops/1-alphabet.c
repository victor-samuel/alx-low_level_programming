#include "main.h"
/**
 * main - Entry point
 * print_alphabet -> prints the lowercase letters
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
