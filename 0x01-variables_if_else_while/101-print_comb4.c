#include <stdio.h>
/**
 *main - prints all possible different combinations of two digits
 *
 *Return: Always 0 (success)
 */
int main(void)
{
        int ones = '0';
        int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++) /* prints tens digit*/
		{
			for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
			{
				if (!((ones == tens) || (tens == hundreds) || (tens > ones) || (hundreds > tens)))/*eliminates repitition*/
                        {
				putchar(hundreds);
				putchar (tens);
				putchar (ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}

		putchar('\n');
		return (0);
}

