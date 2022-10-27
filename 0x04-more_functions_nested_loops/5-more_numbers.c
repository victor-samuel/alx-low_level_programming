#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 */
void more_numbers(void)
{
	int n;
	int r;
	
	for(r = 0; r <= 10; r++)
	{
		for(n = 0; n <= 14; n++)
		{
			_putchar((n % 10) + '0');
			_putchar((n / 10) + '0');
		}
		_putchar('\n');
	}
}
