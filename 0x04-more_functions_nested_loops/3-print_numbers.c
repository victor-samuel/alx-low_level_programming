#include "main.h"
/**
 * print_numbers - print form 0 t0 9
 * @n: number
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar((n % 10) + '0');
		_putchar('\n);
	}
}
