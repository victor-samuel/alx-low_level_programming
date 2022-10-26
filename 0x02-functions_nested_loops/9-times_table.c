#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/**
 *times_table - prints the multiplication table
 */
void times_table(void)
{
	int i, j;
	int mat [SIZE] [SIZE];

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			mat [i] [j]= i * j;
		}
	}

	for (i = 0; i < SIZE; i++)
        {       
                for (j = 0; j < SIZE; j++)
                {       
                        printf("%d" ,mat [i] [j]);
                }
		_putchar('\n');
        }
	return (0);
}
