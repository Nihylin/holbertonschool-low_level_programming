#include "main.h"

/**
 * times_table - print multiplication table up to 9.
 *
 * Return: void
 */

void times_table(void)
{
	int col, lin, ans;
		for (lin = 0; lin <= 9; lin++)
		{
			for (col = 0; col <= 9; col++)
			{
				ans = (lin * col);

				if (col == 0)
				{
					_putchar('0' + ans);
				}
				else if (ans <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ans);
				}
				else if (ans > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (ans / 10));
					_putchar('0' + (ans % 10));
				}
			}
			_putchar('\n');
		}
}

