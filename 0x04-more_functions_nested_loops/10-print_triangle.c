#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int row, spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; ++row)
		{
			for (row = 1; spaces <= size; ++spaces)
			{
				if ((row + spaces) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
