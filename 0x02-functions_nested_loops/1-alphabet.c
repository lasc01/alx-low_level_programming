#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0(successful)
 */
int main(void)
{
	char alpha_low = 'a';

	for (alpha_low = 'a'; alpha_low <= 'z'; alpha_low++)
	{
		_putchar(alpha_low);
	}
	_putchar('\n');
}
