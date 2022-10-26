#include "main.h"
#include <stdio.h>

/**
 * _abs - return absolute value of a number
 * @n: integer parameter
 * Return: absolute vaalue of a number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

