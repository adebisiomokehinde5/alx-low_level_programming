#include "main.h"

/**
 * times_table - Print the 9times table starting 0 -9
 * Return: 9 times table
 */

void times_table(void)

{
	int i, j, n;

	for (i = 0; i <= 9; i++)

	{
		_putchar('0');

		for (j = 1; j <= 9; j++)

		{
			_putchar(',');

			_putchar(' ');

			n = i * j;

			if (n <= 9)

				_putchar(' ');

			else

				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');

		}
		_putchar('\n');

	}

}
