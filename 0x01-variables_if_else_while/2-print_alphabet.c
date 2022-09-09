#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char cr;
	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
