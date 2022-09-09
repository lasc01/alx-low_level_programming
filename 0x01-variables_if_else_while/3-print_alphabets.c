#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char cz;

	for (cz = 'a'; cz <= 'z'; cz++)
	{
		putchar(cz);
	}

	for (cz = 'A'; cz <= 'Z'; cz++)
	{
		putchar(cz);
	}

	putchar('\n');
	return (0);
}

