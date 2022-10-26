#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last number in an integer
 * @n,@x: passed arguments
 * Returns: returns the value of last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
