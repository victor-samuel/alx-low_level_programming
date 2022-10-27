#include "main.h"
/**
 *add - add two integers
 */
int add(int i , int j)
{
	int sum;

	sum = i + j;
	if (sum <= 9){
		_putchar(sum);
	}
	else 
	{
		_putchar(sum + '0');
	}
}

