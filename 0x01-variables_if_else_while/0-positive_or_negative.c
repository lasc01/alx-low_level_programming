#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to int n each
 * time it is executed and pint it.
 * Return: Always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("d% is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		return (0);
	}
}
