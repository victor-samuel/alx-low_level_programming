#include "main.h"
/**
 * print_alphabet_x10 - print all lowercase alphabets ten times
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

