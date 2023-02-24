#include "main.h"
/**
 * print_line - entry point
 *
 * Description: Prints lines
 *
 * @n: number of lines
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; ++num)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}©
