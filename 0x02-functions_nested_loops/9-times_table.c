#include "main.h"
#include <stdio.h>
/**
 *times_table - prints the multiplication table
 */
void times_table(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}

