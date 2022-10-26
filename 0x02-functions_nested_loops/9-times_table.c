#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *times_table - prints the multiplication table
 */
void times_table(void)
{
	int i, j;
	
	 /* Generating Multiplication Table */
	 for(i = 0;i <= 9; i++)
	 {
		  for(j = 0;j <= 9; j++)
		  {
			  if (i < 9 && j < 9)
			  {
				  _putchar(((i * j) / 10) + '0');
				  _putchar(((i * j) % 10) + '0');
				  _putchar(',');
			  }
			  else if (i >= 8 && j >= 8)
			  {
				  _putchar(((i * j) / 10) + '0');
				  _putchar(((i * j) % 10) + '0');
				  _putchar('\n');
			  }
		  }
	 }
}
