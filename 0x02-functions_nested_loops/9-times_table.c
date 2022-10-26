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
			if ( i < 9 && j < 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
			}
			else if (j >= 8)
			{
			_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
			_putchar('\n');
			}
			else{
				_putchar('\n');
			}
		}
	}
}

