#include "main.h"
/**
 * more_numbers - prints the numbers 0-14 ten times
 */
void more_numbers(void)
{
	int n;
	int r;
	for(r = 0; r <= 9; r++)
	{
		for(n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) +'0');
		}
		_putchar('\n');
	}
}
