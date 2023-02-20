#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Entry point
 *
 * Description: print value of n status; positive, zero or negative 
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* The Code */
	if (n > 0)
	{
		printf("%i is positive\n", n);
			}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
			}
	else
	{
		printf("%i is negative\n", n);
			}
	return (0);
}
