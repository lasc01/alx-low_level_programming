#include "main.h"

/**
 * _puts -function that prints string,
 * followed by a new line, to stdout.
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int ola = 0;

	while (str[ola] != '\0')
	{
		_putchar(str[ola]);
		ola++;
	}

	_putchar('\n');
}
