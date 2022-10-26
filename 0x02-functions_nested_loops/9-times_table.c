#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *times_table - prints the multiplication table
 */
void times_table(void)
{
	int i, j, product;
	
	 /* Generating Multiplication Table */
	 for(i = 0;i <= 9; i++)
	 {
		  for(j = 0;j <= 9; j++)
		  {
			   product = i*j;
			   printf("%d",  product);
		  }
		  printf("\n");
	 }
}
