#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char cr;

	for (cr = 'z'; cr >= 'a'; cr--)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}

