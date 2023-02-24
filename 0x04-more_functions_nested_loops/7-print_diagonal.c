#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *
 * @n: number of spaces
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int row, num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num = 1; num <= row - 1; ++num)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
