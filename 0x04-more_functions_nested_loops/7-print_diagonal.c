#include "main.h"
/**
 *print_diagonal - print space and /
 *@n: parameter for how many times to print
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			if (i >= 1)
			{
				for (k = 1; k < i; ++k)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
