#include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10 -> prints ten times the alphabets in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

