#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in L then in U
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';
	char CC = 'A';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}

	while (CC <= 'Z');
	{
		putchar(CC);
		++CC;
	}
	putchar('\n');

	return (0);
}
