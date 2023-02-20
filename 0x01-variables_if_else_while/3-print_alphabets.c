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
	char ch = 'a';
	char C = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');

	return (0);
}}
