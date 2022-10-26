#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/**
 *times_table - prints the multiplication table
 */
void times_table(void)
{
	int i, j, product;
	 clrscr();
	
	 /* Generating Multiplication Table */
	 for(i=1;i<=10;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			   product = i*j;
			   printf("%d\t" , product);
		  }
		  printf("\n");
	 }
}
