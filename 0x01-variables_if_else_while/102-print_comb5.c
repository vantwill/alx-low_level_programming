#include <stdio.h>

/**
<<<<<<< HEAD
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03, ...
=======
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
>>>>>>> 8c711c279187b096659f8248216f3b28e121499b
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		 	for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tens == '9' && ones == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
<<<<<<< HEAD
=======

>>>>>>> 8c711c279187b096659f8248216f3b28e121499b
	return (0);
}
