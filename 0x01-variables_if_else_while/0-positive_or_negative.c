#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Entry point
 *
 * Description : Print Value of n;
 *
 * Return: Always 0 Success
 */

int main (void)
{
	int n;

	/* The Code */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
